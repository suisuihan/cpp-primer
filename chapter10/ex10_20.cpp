#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int biggies(vector<string> &vec, vector<string>::size_type sz){
	return count_if(vec.begin(), vec.end(), [sz](string &s){return s.size() > sz;});
}

int main(){
	vector<string> vec{ "a", "bc", "def", "ghij",  "pqrstu", "klmno", "vwxdddyz"};
	cout << biggies(vec, 6) << endl;
}
