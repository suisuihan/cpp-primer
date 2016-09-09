#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <functional> 

using namespace std;
using namespace std::placeholders;


int main(){
	vector<int> vec{ 1,2,3,4,5,6,7,8,9};
	list<int> dst1, dst2, dst3;
	copy(vec.cbegin(), vec.cend(), back_inserter(dst1));
	copy(vec.cbegin(), vec.cend(), front_inserter(dst2));
	copy(vec.cbegin(), vec.cend(), inserter(dst3, dst3.begin()));
	for(auto &element: dst1)
		cout << element << " ";
	cout << endl;

	for(auto &element: dst2)
		cout << element << " ";
	cout << endl;

	for(auto &element: dst3)
		cout << element << " ";
	cout << endl;

	
}
