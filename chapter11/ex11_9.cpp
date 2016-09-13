#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>

using namespace std;

int main(){
	vector<string> vec;
	string word;
	while(cin >> word)
		vec.push_back(word);
	cin.clear();
	sort(vec.begin(), vec.end());
	auto end_unique = unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
	cout << endl;
	for(auto &w: vec)
		cout << w << endl;
}