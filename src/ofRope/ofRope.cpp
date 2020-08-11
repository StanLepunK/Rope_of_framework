/**
* ofRope describe
* 2020-2020
* v 0.0.1
*/

#include "ofRope.hpp"
#include "../ofApp.hpp"

void ofApp::ofRope() {
	// Processing data
	p5.width = ofGetWidth();
	p5.height = ofGetHeight();
	p5.mouse_x = ofGetMouseX();
	p5.mouse_y = ofGetMouseY();
	p5.mouse_pressed = ofGetMousePressed();
}



void line_3d(vec3<float> a, vec3<float> b) {
	ofDrawLine(a.x(),a.y(),a.z(),b.x(),b.y(),b.z());
}

void line_2d(vec2<float> a, vec2<float> b) {
	ofApp::ofPath line;
	line.DrawLine(a.x(),a.y(),b.x(),b.y());
	// ofDrawLine(a.x(),a.y(),b.x(),b.y());
}

void sphere(vec3<float> coord, float radius) {
	ofDrawSphere(coord.x(),coord.y(),coord.z(), radius);
}