# Simple Typing Effect For Cocos2d-x
cocos2d-x Label에 타이핑 효과를 낼 수 있는 코드입니다. cocos2d-x v3.10 기준으로 작성되었습니다.
 
기본 설정 글자 색상은 **Color3B::WHITE**, 속도는 **0.02f**입니다.
LabelTypingEffect.cpp 11, 12번째 줄 DEFAULT_INTERVAL, DEFAULT_COLOR를 수정하여 변경하실 수 있습니다.

동작 예시 : https://youtu.be/ei4W3tYtHeI

## How to use
1. 헤더 파일을 추가해주세요. (예 : <code>#include "LabelTypingEffect.h"</code> )
2. 효과가 나타나길 원하는 부분에 다음과 같이 함수를 호출해주세요.
<pre>
LabelTypingEffect::typeMessage(효과가 나타나길 원하는 Label, 출력되길 원하는 메시지);
LabelTypingEffect::typeMessage(효과가 나타나길 원하는 Label, 출력되길 원하는 메시지, 타이핑 속도, 글자 색상, 타이핑 완료 후 콜백);
</pre>
3. 파라미터 옵션이 다양합니다. 헤더 파일을 참고해주세요.
4. 사용자가 작성한 클래스에 코드를 수정-작성하여 사용하셔도 무방합니다.

## Example
```C++
    auto txtLabel = Label::createWithTTF("", "fonts/Marker Felt.ttf", 24);
    txtLabel->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
    txtLabel->setPosition(visibleSize * 0.5f);
    txtLabel->setColor(Color3B::WHITE);
    LabelTypingEffect::typeMessage(txtLabel, "Hello World! This is example.");
    this->addChild(txtLabel, 1);
```
