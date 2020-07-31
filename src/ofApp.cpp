#include "ofApp.hpp"



void ofApp::setup() {
	rope();
	ofBackground(r.BLACK);

	vec2<float> pos;
	pos.rand(vec2<float>(width,height));
	body.set(pos);

}

void ofApp::draw() {
	// rope();


	body.add(vec2<float>().rand(-1,1));
	body.follow(mouseX,mouseY);


	r.color(r.GRIS_15);
	ofColor colour(r.red(),r.gre(),r.blu());

	ofPath b;
	b.circle(body.x(),body.y(), 10);
	b.setFillColor(colour);
	b.draw();
}









