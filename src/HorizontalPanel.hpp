//
//  HorizontalPanel.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 14/03/2017.
//
//

#ifndef HorizontalPanel_hpp
#define HorizontalPanel_hpp

#include <stdio.h>
#include "Panel.hpp"

// A HorizontalPanel is a Panel the
// lays out its children horizontally
class HorizontalPanel : public Panel{
public:
    HorizontalPanel (int _x, int _y);
    HorizontalPanel ();
    
    // add widget is overloaded, because
    // the widget is placed at the
    // end of the panel
    virtual void addWidget(Widget *w);
};

#endif /* HorizontalPanel_hpp */
