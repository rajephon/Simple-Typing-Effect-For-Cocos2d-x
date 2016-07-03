# Simple Typing Effect For Cocos2d-x
cocos2d-x Label에 타이핑 효과를 낼 수 있는 코드입니다. cocos2d-x v3.10 기준으로 작성되었습니다.
 
기본 설정 글자 색상은 **Color3B::WHITE**입니다. LabelTypingEffect.cpp 23번째 줄에서 변경 가능합니다.

동작 예시 : https://youtu.be/ei4W3tYtHeI

## How to use
1. 헤더 파일을 추가해주세요. (예 : <code>#include "LabelTypingEffect.h"</code> )
2. 효과가 나타나길 원하는 부분에 다음과 같이 함수를 호출해주세요.
<pre>LabelTypingEffect::typeMessage(효과가 나타나길 원하는 Label, 출력되길 원하는 메시지);</pre>
3. 코드가 매우 간략하므로, 사용자가 원하는 클래스에 붙여 사용할 수 있습니다.

## Example
<pre>
    auto txtLabel = Label::createWithTTF("", "fonts/Marker Felt.ttf", 24);
    txtLabel->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
    txtLabel->setPosition(visibleSize * 0.5f);
    txtLabel->setColor(Color3B::WHITE);
    LabelTypingEffect::typeMessage(txtLabel, "Hello World! This is example.");
    this->addChild(txtLabel, 1);
</pre>
