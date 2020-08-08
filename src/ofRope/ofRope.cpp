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