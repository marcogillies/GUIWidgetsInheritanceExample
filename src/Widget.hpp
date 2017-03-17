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

/*
 * This is the base class for user interface widgets
 */
class Widget {
protected:
    // a rectangle to define the bounds of the widget
    ofRectangle boundingBox;
public:
    // a constructor that takes all of the
    // parameters of the bounding box
    Widget(int x, int y, int width, int height);
    // default constructor
    Widget();
    // the destructor must be virtual
    // to so that you can delete
    // sub classes via widget pointers
    virtual ~Widget();
    
    // the draw function is not virtual
    // it has generic code that applies
    // to all widgets but also calls the
    // virtual function subClassDraw
    // which will have subclass specific
    // code
    void draw();
    // subclass draw is pure virtual so all
    // children must implement it
    virtual void subClassDraw()=0;
    
    // mouse clicked is not virtual.
    // The code for detecting the click is
    // same for all widgets, but the response
    // to the click is different for subclasses
    // so the click response function is virtual
    void mouseClicked(int mouseX, int mouseY);
    virtual void clickResponse(int mouseX, int mouseY);
    
    // getters and setters for the bounding box
    // note that, unlike setting the variables
    // directly, you can set based on parameters
    // (x,y) which are different from the actual
    // variable (the bounding box)
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
