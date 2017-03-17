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
    std::shared_ptr<ofTrueTypeFont> _font,
    std::function<void()> c,
    int _x, int _y)
:TextWidget(_text,_font, _x, _y), callback(c)
{
    // the size of the text widget is
    // set based on the text, but this makes it
    // a bit bigger to the account for the border
    setSize(getWidth()+20, getHeight()+20);
}
Button::Button(
    std::string _text,
    std::shared_ptr<ofTrueTypeFont> _font,
    std::function<void()> c)
:Button(_text,_font, c, 0, 0) // call the other constructor
{

}

// draws a box aournd the text and then draws the text
void Button::subClassDraw(){
    ofNoFill();
    ofDrawRectangle(0, 0, getWidth(), getHeight());
    ofSetColor(255);
    ofFill();
    font->drawString(text, 10, getHeight()-10);
}

// responds to a click by calling the callback
void Button::clickResponse(int mouseX, int mouseY){
    callback();
};
