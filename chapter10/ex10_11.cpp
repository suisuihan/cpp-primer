#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

bool isShorter(const string &s1, const string &s2){
	return s1.size() < s2.size();
}

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

	stable_sort(vec.begin(), vec.end(), isShorter);
	for(auto &element: vec)
		cout << element << " ";
	cout << endl;	
	
}



int main(){
	vector<string> vec{"abc", "abcd", "abc", "efg"};
	elimDups(vec);
}
