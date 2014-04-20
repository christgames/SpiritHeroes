#include "IntroScene.h"
#include "MainMenuScene.h"
#include "CommonFunctions.h"
#include <fstream>
#include <iomanip>

USING_NS_CC;

Scene* Intro::createScene()
{
	auto scene = Scene::create();
	auto layer = Intro::create();
	scene->addChild(layer);
	return scene;
}

bool Intro::init() {
    if ( !CCLayer::init() ) {
        return false;
    }

	//Display Splash Screen #1
	CCSprite *backgroundImg1 = CCSprite::create("intro1.png");
	backgroundImg1->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width / 2, CCDirector::sharedDirector()->getWinSize().height / 2));
	backgroundImg1->setVisible(false);
	addChild(backgroundImg1, -1);
	backgroundImg1->setScaleX((CCDirector::sharedDirector()->getWinSize().width/backgroundImg1->getContentSize().width));
	backgroundImg1->setScaleY((CCDirector::sharedDirector()->getWinSize().height/backgroundImg1->getContentSize().height));

	//Display Splash Screen #2
	CCSprite *backgroundImg2 = CCSprite::create("intro2.png");
	backgroundImg2->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width / 2, CCDirector::sharedDirector()->getWinSize().height / 2));
	backgroundImg2->setVisible(false);
	addChild(backgroundImg2, -1);
	backgroundImg2->setScaleX((CCDirector::sharedDirector()->getWinSize().width/backgroundImg2->getContentSize().width));
	backgroundImg2->setScaleY((CCDirector::sharedDirector()->getWinSize().height/backgroundImg2->getContentSize().height));

	//Splash Screen #1
    CCFiniteTimeAction *seq1 = CCSequence::create(CCDelayTime::create(0.0f), CCCallFuncND::create(this, callfuncND_selector(Intro::IntroImage),backgroundImg1),((void *) 0));
    this->runAction(seq1);

	//Splash Screen #2
    CCFiniteTimeAction *seq2 = CCSequence::create(CCDelayTime::create(2.0f), CCCallFuncND::create(this, callfuncND_selector(Intro::IntroImage),backgroundImg2),((void *) 0));
    this->runAction(seq2);

    //Jump to Main Menu
    CCFiniteTimeAction *seq3 = CCSequence::create(CCDelayTime::create(4.0f), CCCallFuncND::create(this, callfuncND_selector(Intro::NextScene),((void *) 0)),((void *) 0));
    this->runAction(seq3);

    return true;
}

//Display Splash Screen
void Intro::IntroImage(CCNode* sender, void* data) {
	CCSprite *backgroundImg = (CCSprite *)data;
	backgroundImg->setVisible(true);
}

//Jump to Main Menu
void Intro::NextScene(CCNode* sender, void* data) {
	CCDirector::sharedDirector()->replaceScene(MainMenu::scene());
}
