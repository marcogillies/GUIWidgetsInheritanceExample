#pragma once

#include "ofMain.h"
#include <memory>
#include "Widget.hpp"

class ofApp : public ofBaseApp{

    // This is a widget that contains all
    // the other widgets of the interface
    // it will be a panel
    std::unique_ptr<Widget> baseWidget;
    
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
