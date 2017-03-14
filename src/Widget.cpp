//
//  Widget.cpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#include "Widget.hpp"

Widget::Widget(int x, int y, int width, int height)
:boundingBox(x, y, width, height)
{

}


Widget::Widget()
:boundingBox(0, 0, 10, 10)
{
    
}


Widget::~Widget()
{
    
}

void Widget::draw(){
    ofPushMatrix();
    ofTranslate(getX(), getY());
    subClassDraw();
    ofPopMatrix();
}

void Widget::mouseClicked(int mouseX, int mouseY)
{
    if(boundingBox.inside(mouseX, mouseY)){
        clickResponse(mouseX, mouseY);
    }
}
void Widget::clickResponse(int mouseX, int mouseY)
{
    
}
