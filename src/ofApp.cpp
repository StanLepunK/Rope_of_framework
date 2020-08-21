#include "ofApp.hpp"
// Rope r;

void ofApp::setup() {
	ofRope();
	// rope.color(rope.LIME);
	// ofColor colour(rope.red(),rope.gre(),rope.blu());
	Rope *rope = rope->get_instance();
	rope->color(rope->LIME);
	ofColor colour(rope->red(),rope->gre(),rope->blu());
	ofBackground(colour);	// body_setup();

	data_set(data_list, random_int(10,100), 100.0f, p5.height);

}

void ofApp::draw() {
	ofRope();
	// body_draw();
	// shape_draw();
	// rotate_normal_draw();

	// simple data visualisation
	// dataviz();


	test_colour();
}


void ofApp::keyPressed(int key) {
	data_set(data_list, random_int(10,p5.height), 100.0f, p5.height);
}











