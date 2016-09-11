#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;


int main(){
	vector<int> vec{1,2,3,4,5};
	auto iter = vec.cend();
	iter--;
	while(iter != vec.cbegin()){
		cout << *iter << " ";
		iter--;
	}
	cout << *iter;
}
