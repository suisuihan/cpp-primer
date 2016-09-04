#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	vector<int> vec{1,2, 3};
	cout << accumulate(vec.cbegin(), vec.cend(), 0) << endl;
}