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

class Label : public TextWidget
{
    
public:
    Label(std::string _text, ofTrueTypeFont *_font, int _x, int _y);
    Label(std::string _text, ofTrueTypeFont *_font);
    void subClassDraw();
};

#endif /* Label_hpp */
