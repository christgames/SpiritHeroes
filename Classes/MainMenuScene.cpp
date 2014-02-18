#include "IntroScene.h"
#include "MainMenuScene.h"
#include "OptionsMenuScene.h"
#include "GameScene.h"
#include "CreditsScene.h"
#include "CommonFunctions.h"

USING_NS_CC;

CCScene *MainMenu::scene() {
    CCScene *scene = CCScene::create();
    MainMenu *layer = MainMenu::create();
    scene->addChild(layer);
    return scene;
}

bool MainMenu::init() {
    if ( !CCLayer::init() )
    {
        return false;
    }

	//Display Background
	CCSprite *backgroundImg = CCSprite::create("mainmenu.png");
	backgroundImg->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width / 2, CCDirector::sharedDirector()->getWinSize().height / 2));
	addChild(backgroundImg, -1);
	backgroundImg->setScaleX((CCDirector::sharedDirector()->getWinSize().width/backgroundImg->getContentSize().width));
	backgroundImg->setScaleY((CCDirector::sharedDirector()->getWinSize().height/backgroundImg->getContentSize().height));

	//Close Button
	CCMenuItemImage *pCloseBtn = CCMenuItemImage::create("ExitBtnNormal.png","ExitBtnSelected.png",this, menu_selector(MainMenu::menuCloseCallback));
	pCloseBtn->setPosition(ccp(CCDirector::sharedDirector()->getWinSize().width/2,CCDirector::sharedDirector()->getWinSize().height/3.5));
	pCloseBtn->setScaleX((CCDirector::sharedDirector()->getWinSize().height/pCloseBtn->getContentSize().height)*.2);
	pCloseBtn->setScaleY((CCDirector::sharedDirector()->getWinSize().height/pCloseBtn->getContentSize().height)*.2);
	CCMenu* Menu3 = CCMenu::create(pCloseBtn, ((void *) 0));
	Menu3->setPosition( CCPointZero );
	this->addChild(Menu3, 1);

	return true;
}

//Close Application
void MainMenu::menuCloseCallback(CCObject *pSender) {
	StopAllSounds();
	CCDirector::sharedDirector()->end();

	//Platform Specific Cleanup Tasks
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
		exit(0);
	#endif
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
	#endif
	#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
		#ifdef _DEBUG
			_CrtDumpMemoryLeaks();
		#endif
	#endif
}
