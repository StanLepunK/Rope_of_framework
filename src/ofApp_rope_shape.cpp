#include "ofApp.hpp"
/**
* shape test
* 2020-2020
* v 0.0.1
*/
void show_cone(float px, float py, float rx, float ry, float rz) {
	// ofPopMatrix();
	translate(px,py);
	rotateX(rx);
	rotateY(ry);
	rotateZ(rz);
	cone(100,200);
	// cone(px, py, 100,200);
	// ofPushMatrix();
}

void ofApp::shape_setup() {

}



void ofApp::shape_draw() {
	r.color(r.SANG);
	ofColor colour(r.red(),r.gre(),r.blu());
	ofSetColor(colour);

	// rx += 0.01f;
	rx += 0.01f;
	// ry += 0.05f;
	// rz += 0.01f;
	show_cone(p5.width /2, p5.height /2, rx, ry, rz);
	// sphere(p5.width /2, p5.height /2, 100);
	
}