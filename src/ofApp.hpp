#pragma once

#include "ofMain.h"
#include "./ofRope/ofRope.hpp"

// must be enable if it call elsewhre
#include "../rope/class/R_DaP5.hpp"

class ofApp : public ofBaseApp{

public:
	// Rope template, with processing data and Rope arg and function
	R_DaP5 p5;
	Rope r;
	void ofRope();

	// body part describe in of_rope_body.cpp
	vec2<float> dest;
	void body_setup();
	void body_draw();
	R_Body body;

  
  // project part


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
