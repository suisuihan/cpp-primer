#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>
#include <utility>

using namespace std;

int main(){
	map<string, int> words;
	string word;
	while(cin >> word){
		auto ret = words.insert({word, 1});
		if(!ret.second){
			++ret.first->second;
		}
	}
	cout << endl;
	for(auto &i: words){
		cout << i.first << " " << i.second << endl;
	}
}