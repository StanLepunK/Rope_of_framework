#include "ofApp.hpp"
/**
* rotate test
* 2020-2020
* v 0.0.1
*/

void ofApp::rotate_normal_draw() {
	// define position
	float radius = p5.width/5;
	float x = sin(p5.frame_count * 0.01) * radius;
	float y = sin(p5.frame_count * 0.02) * radius;
	float z = sin(p5.frame_count * 0.03) * radius;

	//line
	r.color(r.SANG);
	ofColor colour(r.red(),r.gre(),r.blu());
	ofSetColor(colour);
	ofSetLineWidth(3.0);

	vec3<float> center(p5.width/2,p5.height/2,0);
	vec3<float> dest(x,y,z);
	line_3d(center, dest + center);

	// cone
	r.color(r.LIN);
	colour.set(r.red(),r.gre(),r.blu());
	ofSetColor(colour);

	translate(dest + center);
	vec3<char> axis(0,-1,0);
	// rotate_normal(dest, axis);
	rotate_normal(dest.x(),dest.y(),dest.z(),axis.x(),axis.y(),axis.z());
	cone(12, 40);
}