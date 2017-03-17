//
//  TextWidget.hpp
//  GUIWidgets
//
//  Created by Marco Gillies on 13/03/2017.
//
//

#ifndef TextWidget_hpp
#define TextWidget_hpp

#include <string>
#include "Widget.hpp"

class ofTrueTypeFont;

/*
 *  This is a base class for Widgets that
 *  contain text. 
 *  It stores a string and a font to draw
 *  the text with. 
 *  The class is abstract because it does 
 *  not implement subClassDraw, which is a
 *  pure virtual function of Widget. 
 */
class TextWidget : public Widget{
protected:
    std::string text;
    /*
     *  I have used a shared_ptr for font because
     *  a single font is shared between many widgets
     */
    std::shared_ptr<ofTrueTypeFont> font;
public:
    TextWidget(std::string _text, std::shared_ptr<ofTrueTypeFont> _font);
    TextWidget(std::string _text, std::shared_ptr<ofTrueTypeFont> _font, int x, int y);
};

#endif /* TextWidget_hpp */
