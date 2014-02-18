#ifndef __COMMON_FUNC_H__
#define __COMMON_FUNC_H__

#include "cocos2d.h"

void ExecuteProcess(wchar_t *str);
void MsgBoxFloat(float val);
float XMLGetf(const char *filename, const char *root, const char *child, const char *attrib);
const char *XMLGett(const char *filename, const char *root, const char *child, const char *attrib);
void XMLPut(const char *filename, const char *root, const char *child, const char *attrib, const char *value);
const char* f2Char(float value);
float fRnd2(float value);
const char *PadInt(int num, char pad, int len, const char *cat);
void PlayMovie(const char *file);
void PlayBackgroundMusic();
void PlayClickSound();
void StopAllSounds();
char* GetDataPath(const char *filename);
void InitSetupXML(const char *filename);

#endif

//disable snprintf compiler warning for VS2005
#pragma warning (disable : 4995 )
