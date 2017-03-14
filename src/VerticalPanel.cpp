//
//  VerticalPanel.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 14/03/2017.
//
//

#include "VerticalPanel.hpp"

VerticalPanel::VerticalPanel(int _x, int _y):Panel(_x, _y){
    
}

VerticalPanel::VerticalPanel ():Panel(){
    
}

void VerticalPanel::addWidget(Widget *w)
{
    Panel::addWidget(w);
    
    
    w->setPosition(getSpacing(),
                   getHeight());
    
    int width = getWidth();
    if(width < w->getWidth()+2*getSpacing()){
        width = w->getWidth()+2*getSpacing();
    }
    int height = getHeight();
    height += getSpacing() + w->getHeight();
    
    setSize(width, height);
}
