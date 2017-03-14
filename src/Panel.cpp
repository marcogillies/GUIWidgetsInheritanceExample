//
//  Panel.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#include "Panel.hpp"
#include "ofMain.h"

Panel::Panel (int _x, int _y)
:Widget(_x, _y, 20, 20), spacing(20)
{
    
}

Panel::Panel ()
:Widget(0, 0, 20, 20), spacing(10)
{
    
}

Panel::~Panel ()
{
    for (Widget *w : widgets){
        delete w;
    }
}

void Panel::addWidget(Widget *w){
    widgets.push_back(w);
}

void Panel::subClassDraw()
{
    ofNoFill();
    ofDrawRectangle(0, 0, getWidth(), getHeight());
    //ofTranslate(getSpacing(), getSpacing());
    
    for (Widget *w : widgets){
        w->draw();
    }
}

void Panel::clickResponse(int mouseX, int mouseY){
    mouseX -= getX();
    mouseY -= getY();
    for (Widget *w : widgets){
        w->mouseClicked(mouseX, mouseY);
    }
}
