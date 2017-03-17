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
    // call the addWidget function in
    // the parent class (Panel)
    Panel::addWidget(w);
    
    
    // set the position of the new widget
    // to be just at the bottom of the
    // panel
    w->setPosition(getSpacing(),
                   getHeight());
    
    // resizes the panel to be big enough
    // for the widget
    
    // if the widget is wider than the pane
    // widen the panel so it will fit
    int width = getWidth();
    if(width < w->getWidth()+2*getSpacing()){
        width = w->getWidth()+2*getSpacing();
    }
    // increase the height to fit the widget
    int height = getHeight();
    height += getSpacing() + w->getHeight();
    
    // do the resizing
    setSize(width, height);
}
