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

class HorizontalPanel : public Panel{
public:
    HorizontalPanel (int _x, int _y);
    HorizontalPanel ();
    
    virtual void addWidget(Widget *w);
};

#endif /* HorizontalPanel_hpp */
