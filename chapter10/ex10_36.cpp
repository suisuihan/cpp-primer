#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iterator>
#include <list>


using namespace std;


int main(){
	list<int> li{1,2,3,0,4,0, 5};
	auto index = find(li.crbegin(), li.crend(), 0);
	cout << distance(index, li.crend()) << endl;
}