#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional> 

using namespace std;
using namespace std::placeholders;

int check_size(string &s, string::size_type sz){
	return s.size() <= sz;
}


int main(){
	string s= "abc";
	vector<int> vec{ 1,2,3,4,5,6};
	auto index =  find_if(vec.begin(), vec.end(), bind(check_size, s, _1));
	if(index != vec.end())
		cout << *index << endl;
	else
		cout << "nothing" << endl;
}
