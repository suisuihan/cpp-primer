#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional> 

using namespace std;
using namespace std::placeholders;

int isLonger(string &s, string::size_type sz){
	return s.size() <= sz;
}

int biggies(vector<string> &vec, vector<string>::size_type sz){
	return count_if(vec.begin(), vec.end(), bind(isLonger,_1, sz));
}


int main(){
	vector<string> vec{ "a", "bc", "def", "ghij",  "pqrstu", "klmno", "vwxdddyz"};
	cout << biggies(vec, 6) << endl;
}
