#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <typeinfo>
using namespace std;

int main(){
	multimap<string, string> authors{{"zhang", "san"}, {"li", "si"}, {"li", "ershisi"}, {"wang", "wu"}};
	string auth = "li";
	auto index = authors.find(auth);
	auto count = authors.count(auth);
	while(count > 0){
		index = authors.erase(index);
		--count;
	}
	// authors.erase(auth);
	for(auto &iter: authors)
		cout << iter.first << " " << iter.second << endl;
}