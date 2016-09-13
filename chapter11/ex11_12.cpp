#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>
#include <utility>

using namespace std;

int main(){
	vector<pair<string, int>> vec1, vec2, vec3;
	string word;
	int i;
	while(cin >> word >> i){
		vec1.push_back({word, i});
		vec2.push_back(pair<string, int>(word, i));
		vec3.push_back(make_pair(word, i));
	}
	for(auto &e: vec1)
		cout << e.first << " " << e.second << " ";
	cout << endl;
	
	for(auto &e: vec2)
		cout << e.first << " " << e.second << " ";
	cout << endl;

	for(auto &e: vec3)
		cout << e.first << " " << e.second << " ";
	cout << endl;
}