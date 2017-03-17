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

class Button : public TextWidget
{
    std::function<void()> callback;
public:
    Button(std::string _text, std::shared_ptr<ofTrueTypeFont> _font,
           std::function<void()> c,
           int _x, int _y);
    Button(std::string _text, std::shared_ptr<ofTrueTypeFont> _font,
           std::function<void()> c);
    
    void setCallback(std::function<void()> c){
        callback = c;
    }
    
    void subClassDraw();
    
    void clickResponse(int mouseX, int mouseY);
};



#endif /* Button_hpp */
