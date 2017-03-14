//
//  TextWidget.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#include "TextWidget.hpp"

#include "ofMain.h"

TextWidget::TextWidget(std::string _text, ofTrueTypeFont *_font)
:TextWidget(_text, _font, 0, 0)
{
   
}

TextWidget::TextWidget(std::string _text, ofTrueTypeFont *_font, int x, int y)
:Widget(), text(_text), font(_font)
{
    boundingBox = font->getStringBoundingBox(text, 0,0);
    setPosition(x, y);
}
