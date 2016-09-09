#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <functional> 
#include <fstream>
#include <iterator>

using namespace std;

int main(){
	vector<string> vec;
	ifstream fin("ex10_29.cpp");
	istream_iterator<string> in_iter(fin), eof;
	copy(in_iter, eof, back_inserter(vec));

	for(auto &s: vec)
		cout << s << " ";
	cout << endl;	
	
}
