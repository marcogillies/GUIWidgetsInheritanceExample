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
    // call the addWidget function in
    // the parent class (Panel)
    Panel::addWidget(w);
    
    // set the position of the new widget
    // to be just to the right of the
    // panel
    w->setPosition(getWidth(),
                   getSpacing());
    
    // resizes the panel to be big enough
    // for the widget
    
    // first increase the width
    int width = getWidth();
    width += getSpacing() + w->getWidth();
    // then increase the height if it is shorter
    // than the panel
    int height = getHeight();
    if(height < w->getHeight()+2*getSpacing()){
        height = w->getHeight()+2*getSpacing();
    }
    // do the resizing
    setSize(width, height);
}
