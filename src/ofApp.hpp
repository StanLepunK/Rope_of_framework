#pragma once

#include "ofMain.h"
#include "ofRope.hpp"

class ofApp : public ofBaseApp{

public:
	// body part describe in of_rope_body.cpp
	vec2<float> dest;
	void body_setup();
	void body_draw();




	// rope part
	Rope r;
	R_Body body;
	void rope();
	// rope processing
	float width = 0;
	float height = 0;
	float mouseX = 0;
	float mouseY = 0;


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
