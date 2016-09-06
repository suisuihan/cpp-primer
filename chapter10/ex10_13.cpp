#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

bool isLonger(const string &s){
	return s.size() >= 5;
}



int main(){
	vector<string> vec{ "a", "bc", "def", "ghij", "klmno", "pqrstu", "vwxyz"};
	auto end_true = partition(vec.begin(), vec.end(), isLonger);
	for(auto e = vec.begin(); e != end_true; e++)
		cout << *e << " ";
	cout << endl;
}
