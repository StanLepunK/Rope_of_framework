#include "ofApp.hpp"

void ofApp::setup() {
	ofRope();
	ofBackground(r.BLACK);
	body_setup();
}

void ofApp::draw() {
	ofRope();
	body_draw();
}












