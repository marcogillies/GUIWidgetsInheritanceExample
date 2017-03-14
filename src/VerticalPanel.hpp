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

class VerticalPanel : public Panel{
public:
    VerticalPanel (int _x, int _y);
    VerticalPanel ();
    
    virtual void addWidget(Widget *w);
};


#endif /* VerticalPanel_hpp */
