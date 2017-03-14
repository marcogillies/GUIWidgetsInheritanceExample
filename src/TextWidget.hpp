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

class TextWidget : public Widget{
protected:
    std::string text;
    ofTrueTypeFont *font;
public:
    TextWidget(std::string _text, ofTrueTypeFont *_font);
    TextWidget(std::string _text, ofTrueTypeFont *_font, int x, int y);
};

#endif /* TextWidget_hpp */
