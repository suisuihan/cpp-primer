#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <cctype>
#include <utility>

using namespace std;

int main(){
	map<int, string> students{{1,string("zhangsan")}, {2, string("lisi")}};
	auto iter = students.begin();
	while(iter != students.end()){
		iter->second = iter->second+" Mr";
		iter++;
	}		
	for(auto &i: students)
		cout << i.first << " " << i.second << endl;
}