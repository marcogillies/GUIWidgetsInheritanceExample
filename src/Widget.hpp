//
//  Widget.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#ifndef Widget_hpp
#define Widget_hpp

#include <stdio.h>
#include "ofMain.h"

class Widget {
protected:
    ofRectangle boundingBox;
public:
    Widget(int x, int y, int width, int height);
    Widget();
    virtual ~Widget();
    
    void draw();
    virtual void subClassDraw()=0;
    
    void mouseClicked(int mouseX, int mouseY);
    virtual void clickResponse(int mouseX, int mouseY);
    
    void setPosition(int x, int y){
        boundingBox.setPosition(x, y);
    }
    void setSize(int w, int h){
        boundingBox.setSize(w,h);
    }
    
    int getX(){
        return boundingBox.getX();
    }
    int getY(){
        return boundingBox.getY();
    }
    int getWidth(){
        return boundingBox.getWidth();
    }
    int getHeight(){
        return boundingBox.getHeight();
    }
};

#endif /* Widget_hpp */
