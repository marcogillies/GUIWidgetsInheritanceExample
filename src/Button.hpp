//
//  Button.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#ifndef Button_hpp
#define Button_hpp

#include "TextWidget.hpp"

class ofTrueTypeFont;

/*
 * A Button is a TextWidget because it 
 * includes some text, but it adds a lot more functionality
 */
class Button : public TextWidget
{
    /*
     * This is a callback function: a function 
     * to be called when the button is clicked. 
     * the weird type std::function<void()> is the 
     * type of a function that takes takes no
     * parameters and returns nothing.
     */
    std::function<void()> callback;
public:
    Button(std::string _text, std::shared_ptr<ofTrueTypeFont> _font,
           std::function<void()> c,
           int _x, int _y);
    Button(std::string _text, std::shared_ptr<ofTrueTypeFont> _font,
           std::function<void()> c);
    
    // sets the callback funciton
    void setCallback(std::function<void()> c){
        callback = c;
    }
    
    // draw the button
    void subClassDraw();
    
    // respond to clicks
    void clickResponse(int mouseX, int mouseY);
};



#endif /* Button_hpp */
