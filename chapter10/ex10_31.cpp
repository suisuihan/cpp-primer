#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;

int main(){
	vector<int> vec;
	istream_iterator<int> in_iter(cin), eof;
	ostream_iterator<int> out_iter(cout);
	while(in_iter != eof){
		vec.push_back(*in_iter++);
	}
	sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
}
