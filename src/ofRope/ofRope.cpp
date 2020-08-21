/**
* ofRope describe
* 2020-2020
* v 0.2.0
*/

#include "ofRope.hpp"
#include "../ofApp.hpp"

void ofApp::ofRope() {
	// Processing data
	p5.width = ofGetWidth();
	p5.height = ofGetHeight();
	p5.mouseX = ofGetMouseX();
	p5.mouseY = ofGetMouseY();
	p5.mousePressed = ofGetMousePressed();
	p5.frameCount = ofGetFrameNum();
}



// translate
void translate(float x, float y, float z) {
	ofTranslate(x,y,z);
}

void translate(vec3<float> pos) {
	ofTranslate(pos.x(),pos.y(),pos.z());
}


// rotate
void rotate_x(float x) {
	ofRotateXRad(x);
}

void rotate_y(float y) {
	ofRotateYRad(y);
}

void rotate_z(float z) {
	ofRotateZRad(z);
}

void rotate(float x, float y, float z) {
	rotate_x(x);
	rotate_y(y);
	rotate_z(z);
}

// normal rotation 
// based on matrix and quaternion.
void rotate_normal(float x, float y ,float z, char ax, char ay, char az) {
	rotate_normal(vec3<float>(x,y,z), vec3<char>(ax,ay,az));
}

void rotate_normal(vec3<float> pos, vec3<char> axis) {
	glm::vec3 normal(pos.x(),pos.y(),pos.z());
	normal = glm::normalize(normal);
	// axis rotation.
	// glm::vec3 axis_glm(0, 0, 1);
	glm::vec3 axis_glm(axis.x(),axis.y(),axis.z());
	// create the quaternion which represents the rotation between normal and axis
	glm::quat rotation = glm::rotation(axis_glm, normal);	
	// transform the quaternion to a 4x4 matrix using the glm function for such.
	glm::mat4 rotationMatrix = glm::toMat4(rotation);
	// multiply the rotation matrix with the current matrix.
	// This means that the rotation matrix
	// thus the transformation it represents
	// will be applied on over the current transformation matrix.
	ofMultMatrix(rotationMatrix);
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
