#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>

using namespace std;

int main(){
	map<string, size_t> word_count;
	string word;
	while(cin >> word){
		for(auto &c: word)
			c = tolower(c);
		++word_count[word];
	}
	
	for(auto &w: word_count)
		cout << w.first << " " << w.second << endl;
}