#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>
#include <list>


using namespace std;


int main(){
	vector<int> vec{1,2,3,4,5,6,7,8};
	list<int> li;
	copy( vec.cbegin() + 3, vec.cbegin() + 8,front_inserter(li));
	for(auto i: li)
		cout << i << endl;
}