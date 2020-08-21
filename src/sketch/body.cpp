#include "ofApp.hpp"
/**
* body test
* 2020-2020
* v 0.0.1
*/
void ofApp::body_setup() {
	dest.rand(vec2<float>(p5.width,p5.height));
	body.set(dest);
}

void ofApp::body_draw() {
	body.translate(vec2<float>().rand(-1,1));
	// vec2<float> target(mouseX,mouseY);

	if(!body.follow(dest)) {
		dest.rand(vec2<float>(p5.width,p5.height));
	}
	// body.follow(target);
	body.speed(0.5);


	Rope *rope = rope->get_instance();
	rope->color(rope->GRIS_15);
	ofColor colour(rope->red(),rope->gre(),rope->blu());

	ofPath b;
	b.circle(body.x(),body.y(), 10);
	b.setFillColor(colour);
	b.draw();
}
