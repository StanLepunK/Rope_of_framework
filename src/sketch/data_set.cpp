#include "../ofApp.hpp"
#include <vector>


void ofApp::data_set(vector<float> &data, int num, float min_value, float max_value) {
	data.clear();
	for(int i = 0 ; i < num ; i++) {
		data.push_back(random(min_value, max_value));
	}
}