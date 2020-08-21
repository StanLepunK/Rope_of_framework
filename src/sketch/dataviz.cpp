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
	// ofVertex(marge,marge);
	// ofVertex(p5.width -marge, p5.height -marge);
	// ofVertex(marge,p5.height - marge);
	ofEndShape();
}




void ofApp::dataviz() {
	r.color(r.SANG);
	ofColor colour(r.red(),r.gre(),r.blu());
	ofSetColor(colour); 
	::dataviz(data_list, p5.width, p5.height);
}


// void ofApp::of_polyline() {
// 	r.color(r.NOIR);
// 	ofColor colour(r.red(),r.gre(),r.blu());
// 	ofSetColor(colour);
// 	ofSetLineWidth(3.0f);

// 	int marge = 100;

// 	ofPolyline poly;
// 	// poly.setColor(colour);
// 	poly.addVertex(marge,marge);
// 	poly.addVertex(p5.width -marge, p5.height -marge);
// 	poly.addVertex(marge,p5.height - marge);
// 	poly.close();

// 	poly.draw();
// }

// void ofApp::of_path() {
// 	r.color(r.ORANGE);
// 	ofColor colour(r.red(),r.gre(),r.blu());
	
// 	int marge = 150;

// 	ofPath path;
// 	path.setColor(colour);
// 	path.lineTo(marge,marge);
// 	path.lineTo(p5.width -marge, p5.height -marge);
// 	path.lineTo(marge,p5.height - marge);
// 	path.close();

// 	path.draw();
// }