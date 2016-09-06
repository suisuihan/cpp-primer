#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;
template<typename T>
void elimDups(vector<T> &vec){
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;
	
	sort(vec.begin(), vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;

	auto end_unique = unique(vec.begin(), vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;
	
	vec.erase(end_unique, vec.end());
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;	
}

int main(){
	vector<int> vec{4,2,3,2,3};
	elimDups(vec);
}
