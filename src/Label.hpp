//
//  Label.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#ifndef Label_hpp
#define Label_hpp

#include "TextWidget.hpp"

class ofTrueTypeFont;

/*
 *  Label is a TextWidget that simply displays
 *  the text and does nothing else.
 *  It uses the text and font variables of TextWidget
 *  and implements the virtual function subClassDraw
 *  to draw the text
 */
class Label : public TextWidget
{
    
public:
    Label(std::string _text, std::shared_ptr<ofTrueTypeFont> _font, int _x, int _y);
    Label(std::string _text, std::shared_ptr<ofTrueTypeFont> _font);
    void subClassDraw();
};

#endif /* Label_hpp */
