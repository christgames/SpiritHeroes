#include "CommonFunctions.h"
#include "SimpleAudioEngine.h"
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include "..\..\..\cocos2dx\support\tinyxml2\tinyxml2.h"

USING_NS_CC;
using namespace std;
using namespace CocosDenshion;

//Windows Specifics
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)

#include <Strsafe.h>
#include <Windows.h>

//Execute an external process
void ExecuteProcess(wchar_t *str) {
    STARTUPINFOW si;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
    PROCESS_INFORMATION pi;
    memset(&si, 0, sizeof(si));
    memset(&pi, 0, sizeof(pi));
    si.cb = sizeof(si);
	CreateProcessW(NULL, str, 0, 0, false, CREATE_NO_WINDOW, 0, 0, &si, &pi);
	WaitForSingleObject(pi.hProcess, INFINITE);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
	return;
}

//Display MsgBox With Float Input
void MsgBoxFloat(float v) {
	TCHAR s[80];
	StringCchPrintf(s, 30, TEXT("%f"), v);
	MessageBox(NULL,s,L"Float value is:",MB_OK);
}

#endif

//TinyXML Get XML Float Attribute
float XMLGetf(const char *filename, const char *root, const char *child, const char *attrib) {
	tinyxml2::XMLDocument doc;
	unsigned long bufferSize = 0;
	unsigned char *fileContent = CCFileUtils::sharedFileUtils()->getFileData(filename, "r", &bufferSize);
	doc.Parse((char*)fileContent);
	tinyxml2::XMLElement* element = doc.FirstChildElement(root)->FirstChildElement(child);
	float val = atof(element->Attribute(attrib));
    delete [] fileContent;
    fileContent = NULL;
	return val;
}

//TinyXML Get XML Text Attribute
const char *XMLGett(const char *filename, const char *root, const char *child, const char *attrib) {
	tinyxml2::XMLDocument doc;
	unsigned long bufferSize = 0;
	unsigned char *fileContent = CCFileUtils::sharedFileUtils()->getFileData(filename, "r", &bufferSize);
	doc.Parse((char*)fileContent);
	tinyxml2::XMLElement* element = doc.FirstChildElement(root)->FirstChildElement(child);
	std::string val = element->Attribute(attrib);
	char *cstr = new char[val.length() + 1];
	strcpy(cstr, val.c_str());
    delete [] fileContent;
    fileContent = NULL;
	return cstr;
}

//TinyXML Put XLM Attribute
void XMLPut(const char *filename, const char *root, const char *child, const char *attrib, const char *value) {
	tinyxml2::XMLDocument doc;
	unsigned long bufferSize = 0;
	char datFile[1024] = "";
	strcat(datFile,GetDataPath(filename));
	unsigned char *fileContent;
	fileContent = CCFileUtils::sharedFileUtils()->getFileData(datFile, "r", &bufferSize);
	doc.Parse((char*)fileContent);
	tinyxml2::XMLElement* element = doc.FirstChildElement(root)->FirstChildElement(child);
	element->SetAttribute(attrib,value);
	doc.SaveFile(datFile);
	delete [] fileContent;
	fileContent = NULL;
	return;
}

//Convert Float to String
const char *f2Char(float value) {
    stringstream ss;
    ss << std::fixed;
    ss << std::setfill('0');
    ss << std::setw(6);
    ss << std::setprecision(2);
    ss << value;
	std::string val = ss.str();
	char *cstr = new char[val.length() + 1];
	strcpy(cstr, val.c_str());
	return cstr;
}

//Round Float to 2 Decimals
float fRnd2(float value) {
	float r;
    stringstream ss;
    ss << std::fixed;
    ss << std::setprecision(2);
    ss << value;
	ss >> r;
	return r;
}

//Char Concatenate + Pad Integer
const char *PadInt(int num, char pad, int len, const char *cat)
{
    std::ostringstream ss;
    ss << cat << std::setw(len) << std::setfill(pad) << num;
    std::string str = ss.str();
	char *result = new char[str.length() + 1];
	strcpy(result, str.c_str());
    return result;
}

void PlayMovie(const char *file) {
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		char str[1024] = "mplayer.exe -fs -ontop -really-quiet -msglevel all=-1 ";
		strcat(str,file);
		wchar_t *wstr = new wchar_t[strlen(str)+1];
		mbstowcs (wstr, str, strlen(str)+1);
		ExecuteProcess(wstr);
	#endif
	return;
}

//Play Background Music
void PlayBackgroundMusic() {
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
		SimpleAudioEngine::sharedEngine()->preloadBackgroundMusic("musicloop.ogg");
		SimpleAudioEngine::sharedEngine()->setBackgroundMusicVolume(0.5f);
		SimpleAudioEngine::sharedEngine()->playBackgroundMusic("musicloop.ogg",true);
	#endif
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		SimpleAudioEngine::sharedEngine()->preloadBackgroundMusic("musicloop.wav");
		SimpleAudioEngine::sharedEngine()->setBackgroundMusicVolume(0.5f);
		SimpleAudioEngine::sharedEngine()->playBackgroundMusic("musicloop.wav",true);
	#endif
}

//Play Click Sound
void PlayClickSound() {
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
		SimpleAudioEngine::sharedEngine()->preloadEffect("click.ogg");
		SimpleAudioEngine::sharedEngine()->playEffect("click.ogg");
	#endif
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		SimpleAudioEngine::sharedEngine()->preloadEffect("click.wav");
		SimpleAudioEngine::sharedEngine()->playEffect("click.wav");
	#endif
}

//Stop All Sounds
void StopAllSounds() {
	SimpleAudioEngine::sharedEngine()->stopBackgroundMusic();
	SimpleAudioEngine::sharedEngine()->stopAllEffects();
	SimpleAudioEngine::sharedEngine()->end();
}

//Get Data Path
char* GetDataPath(const char *filename) {
	std::string val = CCFileUtils::sharedFileUtils()->getWritablePath();
	char *cstr = new char[1024];
	strcpy(cstr, val.c_str());
//	strcat(cstr,"ChristGames/Football/");
	strcat(cstr,filename);
	return cstr;
}

//Initialize setup.xml
void InitSetupXML(const char *filename) {
	unsigned long bufferSize = 0;
	char datFile[1024] = "";
	strcat(datFile,GetDataPath(filename));
	CCLog("%s \n",datFile);
	if (!CCFileUtils::sharedFileUtils()->isFileExist(datFile)) {
		unsigned char *origContent;
		origContent = CCFileUtils::sharedFileUtils()->getFileData(filename, "r", &bufferSize);
		ofstream dest(datFile, ios::out);
		dest << origContent;
		dest.close();
		delete [] origContent;
		origContent = NULL;
	}
}
