#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
using namespace std;

map<string, string> buildMap(ifstream &map_file){
	map<string, string> rules;
	string key;
	string value;
	while(map_file >> key and getline(map_file, value)){
		if(value.size() > 1)
			rules[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}
	return rules;
}

string transform(const string &word, const map<string, string> rules){
	auto index = rules.find(word);
	if(index != rules.end())
		return index->second;
	else
		return word;
}

void word_transform(ifstream &map_file, ifstream &input_file){
	auto rules = buildMap(map_file);
	string text;
	while(getline(input_file, text)){
		istringstream is(text);
		string word;
		bool firstword = true;
		while(is >> word){
			if(firstword)
				firstword = false;
			else	
				cout << " ";
			cout << transform(word, rules);
		}
		cout << endl;
	}
}

int main(){
	string rules_file = "rules.txt", input_file = "input.txt";
	ifstream rule_stream(rules_file), input_stream(input_file);
	word_transform(rule_stream, input_stream);
}