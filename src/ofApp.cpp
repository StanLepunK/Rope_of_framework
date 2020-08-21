#include "ofApp.hpp"

void ofApp::setup() {
	ofRope();
	r.color(r.LIME);
	ofColor colour(r.red(),r.gre(),r.blu());
	ofBackground(colour);	// body_setup();

	data_set(data_list, random_int(10,100), 100.0f, p5.height);

}

void ofApp::draw() {
	ofRope();
	// body_draw();
	// shape_draw();
	// rotate_normal_draw();

	// simple data visualisation
	dataviz();
}


void ofApp::keyPressed(int key) {
	data_set(data_list, random_int(10,p5.height), 100.0f, p5.height);
}











