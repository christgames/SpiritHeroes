#ifndef __INTRO_SCENE_H__
#define __INTRO_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;

class Intro : public cocos2d::CCLayer
{
public:
    virtual bool init();
    static cocos2d::CCScene* scene();
	void IntroImage(CCNode* sender, void* data);
	void NextScene(CCNode* sender, void* data);
	void RemoveChildSeq(CCObject* pObj);
    CREATE_FUNC(Intro);
};

#endif
