#include "AppDelegate.h"
#include "IntroScene.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
}

AppDelegate::~AppDelegate() {
}

bool AppDelegate::applicationDidFinishLaunching() {
	auto director = Director::getInstance();
	auto glview = director->getOpenGLView();
	if (!glview) {
		glview = GLView::create("Spirit Heroes - The Adventure Begins");
		director->setOpenGLView(glview);
	}
	director->setDisplayStats(false);
	glview->setDesignResolutionSize(glview->getFrameSize().width, glview->getFrameSize().height, kResolutionNoBorder);
	glview->setFrameSize(glview->getFrameSize().width, glview->getFrameSize().height);
	director->setContentScaleFactor(1.0f);
	director->setAnimationInterval(1.0 / 60);
	auto scene = Intro::createScene();
	director->runWithScene(scene);

    return true;
}

void AppDelegate::applicationDidEnterBackground() {
    CCDirector::sharedDirector()->stopAnimation();
}

void AppDelegate::applicationWillEnterForeground() {
    CCDirector::sharedDirector()->startAnimation();
}

