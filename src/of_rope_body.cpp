#include "ofApp.hpp"
/**
* body test
* 2020-2020
* V0.0.1
*/
void ofApp::body_setup() {
	dest.rand(vec2<float>(width,height));
	body.set(dest);
}

void ofApp::body_draw() {
	body.translate(vec2<float>().rand(-1,1));
	// vec2<float> target(mouseX,mouseY);

	if(!body.follow(dest)) {
		dest.rand(vec2<float>(width,height));
	}
	// body.follow(target);
	body.speed(0.5);

	r.color(r.GRIS_15);
	ofColor colour(r.red(),r.gre(),r.blu());

	ofPath b;
	b.circle(body.x(),body.y(), 10);
	b.setFillColor(colour);
	b.draw();
}