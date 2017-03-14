//
//  Button.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#include "Button.hpp"

#include "ofMain.h"

Button::Button(
    std::string _text,
    ofTrueTypeFont *_font,
    std::function<void()> c,
    int _x, int _y)
:TextWidget(_text,_font, _x, _y), callback(c)
{
    setSize(getWidth()+20, getHeight()+20);
}
Button::Button(
    std::string _text,
    ofTrueTypeFont *_font,
    std::function<void()> c)
:Button(_text,_font, c, 0, 0)
{

}
void Button::subClassDraw(){
    //std::cout << "Button " << getWidth() << " " << getHeight() << std::endl;
    ofNoFill();
    ofDrawRectangle(0, 0, getWidth(), getHeight());
    ofSetColor(255);
    ofFill();
    font->drawString(text, 10, getHeight()-10);
}


void Button::clickResponse(int mouseX, int mouseY){
    callback();
};
