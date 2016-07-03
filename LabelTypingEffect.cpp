//
//  LabelTypingEffect.cpp
//  
//
//  Created by Chanwoo Noh on 2016. 7. 4..
//
//

#include "LabelTypingEffect.h"

void LabelTypingEffect::typeMessage(cocos2d::Label *txtBox, const std::string &strChatMessage) {
    txtBox->setVisible(false);
    txtBox->setString(strChatMessage);
    static int typeIdx = 0;
    int max = txtBox->getStringLength();
    for (int i = 0; i < max; ++i) {
        txtBox->getLetter(i)->setOpacity(0);
    }
    txtBox->setVisible(true);
    
    txtBox->schedule([txtBox, max](float dt) {
        txtBox->getLetter(typeIdx)->setOpacity(255);
        txtBox->getLetter(typeIdx)->setColor(Color3B::WHITE); // Your Text Color
        typeIdx++;
        if (typeIdx == max) {
            txtBox->unschedule("typeMessage");
            typeIdx = 0;
        }
    }, 0.02f, max - 1, 0, "typeMessage");
}