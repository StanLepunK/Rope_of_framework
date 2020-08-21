#include "../ofApp.hpp"
#include <vector>
/**
* create inforgraphy
* 2020-2020
* v 0.0.1
*/

void dataviz(vector<float> &list, float width, float height) {
 	ofBeginShape();
 	float step = width / (list.size() - 1);
 	float start = 0;
 	for(float p : list) {
 		ofVertex(start,p);
 		start += step;
 	}
 	ofVertex(width,height);
 	ofVertex(0,height);
	ofEndShape();
}

void ofApp::dataviz() {
	Rope *rope = rope->get_instance();
	rope->color(rope->SANG);
	ofColor colour(rope->red(),rope->gre(),rope->blu());
	ofSetColor(colour); 
	::dataviz(data_list, p5.width, p5.height);
}
