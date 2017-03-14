#include "ofApp.h"

#include "Widget.hpp"
#include "Label.hpp"
#include "Button.hpp"
#include "HorizontalPanel.hpp"
#include "VerticalPanel.hpp"



//--------------------------------------------------------------
void ofApp::setup(){
    fonts.push_back(new ofTrueTypeFont());
    fonts.back()->load("HelveticaNeue", 32);
    Panel *basePanel = new VerticalPanel(10, 10);
    
    basePanel->addWidget(new Label("hello",
                                fonts.back()));
    
    Panel *innerPanel = new HorizontalPanel();
    
    innerPanel->addWidget(
        new Button("Button1",
                   fonts.back(),
                   [](){std::cout << "B1" << std::endl;}));
    innerPanel->addWidget(
        new Button("Button2",
                   fonts.back(),
                   [](){std::cout << "B2" << std::endl;}));
    
    
    basePanel->addWidget(innerPanel);
    
    baseWidget = basePanel;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
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
