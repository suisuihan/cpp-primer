#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main(){
	//(a)
	vector<int> vec;
	list<int> lst; 
	int i;
	while(cin >> i)
		lst.push_back(i);
	vec.resize(lst.size());
	copy(lst.cbegin(), lst.cend(), vec.begin());
	for(auto num: vec)
		cout << num << endl;

	//(b)
	vector<int> vecb;
	vecb.resize(10);
	fill_n(vecb.begin(), 10, 0);
	for(auto num: vecb)
		cout << num << endl;
}
