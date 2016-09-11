#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>

using namespace std;


int main(){
	vector<int> vec{1,2,3,4,5};
	copy(vec.crbegin(), vec.crend(), ostream_iterator<int>(cout, " "));
}
