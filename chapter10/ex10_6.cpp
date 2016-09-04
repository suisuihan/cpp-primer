#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>

using namespace std;

int main(){
	vector<int> vec{1,2,3};
	fill_n(vec.cbegin(), vec.cend(), 0);
	for(auto i: vec)
		cout << i << endl;
}
