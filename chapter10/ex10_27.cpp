#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional> 

using namespace std;
using namespace std::placeholders;


int main(){
	vector<string> vec{ "abc","abc","defg","hijkl","opq"};
	vector<string> dst;
	unique_copy(vec.cbegin(), vec.cend(), back_inserter(dst));
	for(auto &element: dst)
		cout << element << endl;
}
