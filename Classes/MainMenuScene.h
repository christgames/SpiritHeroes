#ifndef __MAINMENU_SCENE_H__
#define __MAINMENU_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;

class MainMenu : public cocos2d::CCLayer
{
public:
    virtual bool init();
    static cocos2d::CCScene *scene();
	void menuCloseCallback(cocos2d::CCObject *pSender);
    CREATE_FUNC(MainMenu);
};

#endif

