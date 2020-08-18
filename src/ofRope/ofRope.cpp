/**
* ofRope describe
* 2020-2020
* v 0.0.3
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



// translate
void translate(float x, float y, float z) {
	ofTranslate(x,y,z);
}

void translate(vec3<float> pos) {
	ofTranslate(pos.x(),pos.y(),pos.z());
}


// rotate
void rotateX(float x) {
	ofRotateXRad(x);
}

void rotateY(float y) {
	ofRotateYRad(y);
}

void rotateZ(float z) {
	ofRotateZRad(z);
}

void rotate(float x, float y, float z) {
	rotateX(x);
	rotateY(y);
	rotateZ(z);
}


// display
// line
void line_3d(vec3<float> a, vec3<float> b) {
	ofDrawLine(a.x(),a.y(),a.z(),b.x(),b.y(),b.z());
}

void line_2d(vec2<float> a, vec2<float> b) {
	ofDrawLine(a.x(),a.y(),b.x(),b.y());
}

// box
void box(vec3<float> size) {
	ofDrawBox(size.x(), size.y(), size.z());
}

void box(float size) {
	ofDrawBox(size, size, size);
}

void box(float width, float height, float depth) {
	ofDrawBox(width, height, depth);
}

void box(vec3<float> pos, vec3<float> size) {
	ofDrawBox(pos.x(), pos.y(), pos.z(), size.x(), size.y(), size.z());
}

void box(float x, float y, float z, float size) {
	ofDrawBox(x, y, z, size, size, size);
}

void box(float x, float y, float z, float width, float height, float depth) {
	ofDrawBox(x, y, z, width, height, depth);
}

// sphere
void sphere(float radius) {
	ofDrawSphere(radius);
}

void sphere(float x, float y, float radius) {
	ofDrawSphere(x,y,radius);
}

void sphere(float x, float y, float z, float radius) {
	ofDrawSphere(x,y,z,radius);
}

void sphere(vec3<float> pos, float radius) {
	ofDrawSphere(pos.x(),pos.y(),pos.z(), radius);
}

// cone
void cone(float radius, float height) {
	ofDrawCone(radius, height);
}

void cone(float x, float y, float radius, float height) {
	ofDrawCone(x, y, radius, height);
}

void cone(float x, float y, float z, float radius, float height) {
	ofDrawCone(x, y, z, radius, height);
}

void cone(vec3<float> coord, float radius, float height) {
	ofDrawCone(ofPoint(coord.x(), coord.y(), coord.z()), radius, height);
}