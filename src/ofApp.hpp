#pragma once

#include "ofMain.h"
#include "ofRope.hpp"

class ofApp : public ofBaseApp{

public:
	// rope part
	Rope r;
	R_Body body;
	float width = 0;
	float height = 0;
	float mouseX = 0;
	float mouseY = 0;

	void rope();


	// openframwork part
	void setup();
	void draw();
 
 	// void update();
	// void keyPressed(int key);
	// void keyReleased(int key);
	// void mouseMoved(int x, int y );
	// void mouseDragged(int x, int y, int button);
	// void mousePressed(int x, int y, int button);
	// void mouseReleased(int x, int y, int button);
	// void mouseEntered(int x, int y);
	// void mouseExited(int x, int y);
	// void windowResized(int w, int h);
	// void dragEvent(ofDragInfo dragInfo);
	// void gotMessage(ofMessage msg);
		
};
