/**
* ofApp
* 2020-2020
* v 0.0.3
*/
#pragma once

#include "ofMain.h"
#include "./ofRope/ofRope.hpp"

// must be enable if it call elsewhre
#include "../rope/class/R_P5.hpp"




class ofApp : public ofBaseApp{

public:
	// Rope template, with processing data and Rope arg and function
	Rope *r = r->get_instance();
	R_P5 p5;
	void ofRope();

	// event_key

	// useful var
	float rx = 0;
	float ry = 0;
	float rz = 0;

	// body part describe in of_rope_body.cpp
	vec2<float> dest;
	void body_setup();
	void body_draw();
	R_Body body;

	//shape test
	void shape_draw();

	// color test
	void test_colour();


	// data visualazation
	vector<float> data_list;
	void data_set(vector<float> &data, int num, float min_value, float max_value);
	void dataviz();

	//rotate test
	void rotate_normal_draw();




	// openframwork part
	void setup();
	void draw();
 
 	// void update();
	void keyPressed(int key);
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
