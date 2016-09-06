#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include "../chapter7/ex7_26.h"
using namespace std;

bool isShorter(const Sales_data &s1, const Sales_data &s2){
	return s1.isbn().size() < s2.isbn().size();
}

void compareIsbn(vector<Sales_data> &vec){
	for(auto &element: vec)
		cout << element.isbn() << " ";
	cout << endl;

	stable_sort(vec.begin(), vec.end(), isShorter);
	for(auto &element: vec)
		cout << element.isbn() << " ";
	cout << endl;	
	
}



int main(){
	vector<Sales_data> vec{ Sales_data{"efg",10, 20}, Sales_data{"abc",10, 20}};
	compareIsbn(vec);
}
