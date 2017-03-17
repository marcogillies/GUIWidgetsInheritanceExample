//
//  Panel.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#ifndef Panel_hpp
#define Panel_hpp

#include <vector>
#include "Widget.hpp"

/*
 *  A panel is a widget that can contain other widgets
 */
class Panel : public Widget
{
    // the widgets contained in the panel
    std::vector<Widget *> widgets;
    // the spacing (in pixels) between widgets
    int spacing;
public:
    // x and y are the positions of the panel
    Panel (int _x, int _y);
    Panel ();
    ~Panel ();
    
    // add a widget to the panel
    virtual void addWidget(Widget *w);
    
    // specific drawing code for a panel
    void subClassDraw();
    
    // how the panel responds to a mouse click
    void clickResponse(int mouseX, int mouseY);
    
    // getter and setter for spacing
    void setSpacing(int s){
        spacing = s;
    }
    int getSpacing(){
        return spacing;
    }
};

#endif /* Panel_hpp */
