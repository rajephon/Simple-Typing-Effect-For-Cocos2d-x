//
//  LabelTypingEffect.h
//  
//
//  Created by Chanwoo Noh on 2016. 7. 4..
//
//

#ifndef LabelTypingEffect_h
#define LabelTypingEffect_h

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

using namespace cocos2d;

class LabelTypingEffect {
public:
    static void typeMessage(Label *txtBox, const std::string &strChatMessage);
};

#endif /* LabelTypingEffect_h */
