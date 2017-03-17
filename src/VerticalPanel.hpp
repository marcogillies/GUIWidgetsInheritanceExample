//
//  VerticalPanel.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 14/03/2017.
//
//

#ifndef VerticalPanel_hpp
#define VerticalPanel_hpp

#include <stdio.h>

#include "Panel.hpp"

// A HorizontalPanel is a Panel the
// lays out its children horizontally
class VerticalPanel : public Panel{
public:
    VerticalPanel (int _x, int _y);
    VerticalPanel ();
    
    // add widget is overloaded, because
    // the widget is placed at the
    // end of the panel
    virtual void addWidget(Widget *w);
};


#endif /* VerticalPanel_hpp */
