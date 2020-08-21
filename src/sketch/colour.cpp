#include "../ofApp.hpp"


void ofApp::test_colour() {
	Rope *rope = rope->get_instance();
	ofSetColor(colour(rope->OUTREMER));
	ofDrawCircle(100,100, 100);
}
