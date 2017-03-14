//
//  HorizontalPanel.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 14/03/2017.
//
//

#include "HorizontalPanel.hpp"

HorizontalPanel::HorizontalPanel(int _x, int _y):Panel(_x, _y){
    
}

HorizontalPanel::HorizontalPanel ():Panel(){
    
}

void HorizontalPanel::addWidget(Widget *w)
{
    Panel::addWidget(w);
    
    
    w->setPosition(getWidth(),
                   getSpacing());
    
    int width = getWidth();
    width += getSpacing() + w->getWidth();
    int height = getHeight();
    if(height < w->getHeight()+2*getSpacing()){
        height = w->getHeight()+2*getSpacing();
    }
    setSize(width, height);
}
