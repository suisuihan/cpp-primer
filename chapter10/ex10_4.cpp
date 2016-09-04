#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	vector<double> vec{1.9,2.9, 3.9};
	cout << accumulate(vec.cbegin(), vec.cend(), 0) << endl;
}