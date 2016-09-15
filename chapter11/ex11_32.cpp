#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <typeinfo>
using namespace std;

int main(){
	multimap<string, string> authors{{"zhang", "san"}, {"li", "si"}, {"li", "ershisi"}, {"wang", "wu"}};
	for(auto &iter: authors)
		cout << iter.first << " " << iter.second << endl;
}