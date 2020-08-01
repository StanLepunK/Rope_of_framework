#include "ofApp.hpp"

void ofApp::setup() {
	rope();
	ofBackground(r.BLACK);
	body_setup();
}

void ofApp::draw() {
	rope();
	body_draw();
}












