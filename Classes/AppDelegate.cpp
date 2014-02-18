#include "AppDelegate.h"
#include "IntroScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
}

AppDelegate::~AppDelegate() {
}

bool AppDelegate::applicationDidFinishLaunching() {
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView* pEGLView = CCEGLView::sharedOpenGLView();
    pDirector->setOpenGLView(pEGLView);
    pDirector->setDisplayStats(false);
    pDirector->setAnimationInterval(1.0 / 60);
	pEGLView->setDesignResolutionSize(CCEGLView::sharedOpenGLView()->getFrameSize().width, CCEGLView::sharedOpenGLView()->getFrameSize().height, kResolutionNoBorder);
	pEGLView->setFrameSize(CCEGLView::sharedOpenGLView()->getFrameSize().width, CCEGLView::sharedOpenGLView()->getFrameSize().height);
	pDirector->setContentScaleFactor(1.0f);
	CCScene *pIntroScene = Intro::scene();
    pDirector->runWithScene(pIntroScene);
    return true;
}

void AppDelegate::applicationDidEnterBackground() {
    CCDirector::sharedDirector()->stopAnimation();
}

void AppDelegate::applicationWillEnterForeground() {
    CCDirector::sharedDirector()->startAnimation();
}

