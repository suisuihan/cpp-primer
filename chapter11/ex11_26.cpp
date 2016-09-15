#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <typeinfo>
using namespace std;

int main(){
	map<int, string> student;
	student[0] = "zhang San";
	cout << "typeid(map[0]) is " << typeid(decltype(student[0])).name() << endl;
}