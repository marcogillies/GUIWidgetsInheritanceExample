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

// the destructor must delete all the
// widgets contained in this panel
// (alternatively I could have used a unique_ptr
Panel::~Panel ()
{
    for (Widget *w : widgets){
        delete w;
    }
}

// add a new widget to the panel
void Panel::addWidget(Widget *w){
    widgets.push_back(w);
}

void Panel::subClassDraw()
{
    // draw a box around the panel
    ofNoFill();
    ofDrawRectangle(0, 0, getWidth(), getHeight());
    
    
    // draw all of the child widgets
    for (Widget *w : widgets){
        w->draw();
    }
}

void Panel::clickResponse(int mouseX, int mouseY){
    // transform the mouse coordinates
    // into the frame of the panel
    mouseX -= getX();
    mouseY -= getY();
    // pass on the mouse click to all the children
    for (Widget *w : widgets){
        w->mouseClicked(mouseX, mouseY);
    }
}
