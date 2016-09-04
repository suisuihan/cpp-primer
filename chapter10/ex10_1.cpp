#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> vec{1,2,3};
	cout << count(vec.cbegin(), vec.cend(), 1) << endl;
	cout << count(vec.cbegin(), vec.cend(), 0) << endl;
}