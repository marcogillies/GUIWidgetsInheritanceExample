//
//  Label.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#include "Label.hpp"

#include "ofMain.h"


Label::Label(std::string _text,
             std::shared_ptr<ofTrueTypeFont> _font, int _x, int _y)
:TextWidget(_text,_font, _x, _y)
{
    
}
Label::Label(std::string _text,
             std::shared_ptr<ofTrueTypeFont> _font)
:TextWidget(_text,_font)
{
    
}

// simply draw the text with the font
void Label::subClassDraw(){
    font->drawString(text, 0, getHeight());
}
