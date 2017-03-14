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

class Panel : public Widget
{
    std::vector<Widget *> widgets;
    int spacing;
public:
    Panel (int _x, int _y);
    Panel ();
    ~Panel ();
    
    virtual void addWidget(Widget *w);
    void subClassDraw();
    
    void clickResponse(int mouseX, int mouseY);
    
    void setSpacing(int s){
        spacing = s;
    }
    int getSpacing(){
        return spacing;
    }
};

#endif /* Panel_hpp */
