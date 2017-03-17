#include "ofApp.h"

#include "Widget.hpp"
#include "Label.hpp"
#include "Button.hpp"
#include "HorizontalPanel.hpp"
#include "VerticalPanel.hpp"



//--------------------------------------------------------------
void ofApp::setup(){
    // create the base panel which will contain
    // everything else
    // (this will eventually be put in BaseWidget
    // but for now we are using a Panel pointer
    // because we need to access functionality that
    // is only in panels.
    Panel *basePanel = new VerticalPanel(10, 10);
    
    // create the font as a shared pointer because it will be
    // shared between widgets
    // I'm using make_shared to both allocate a pointer and
    // put it in a shared pointer
    std::shared_ptr<ofTrueTypeFont> font =std::make_shared<ofTrueTypeFont>();
    font->load("Arial", 32);
    
    // add a Label to the Panel
    basePanel->addWidget(new Label("hello",
               font));
    
    // create a second panel that will go inside the
    // outer panel
    Panel *innerPanel = new HorizontalPanel();
    
    // add two buttons to the inner panel
    // note I am passing in a lambda (anonymous function)
    // as the button callback
    innerPanel->addWidget(
        new Button("Button1",
                   font,
                   [](){std::cout << "B1" << std::endl;}));
    innerPanel->addWidget(
        new Button("Button2",
                   font,
                   [](){std::cout << "B2" << std::endl;}));
    
    // add the inner panel to the outer panel
    basePanel->addWidget(innerPanel);
    
    // store the pointer to the base panel in
    // baseWidget (converting it to a unique_ptr)
    baseWidget = unique_ptr<Widget>(basePanel);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw the whole interface by
    // calling draw on the base widget
    baseWidget->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    baseWidget->mouseClicked(x,y);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
