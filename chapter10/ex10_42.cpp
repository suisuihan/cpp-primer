#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

void elimDups(list<int> &li){
	li.sort();
 	li.unique();
}

int main(){
	list<int> li{4,2,3,2,3};
	elimDups(li);
	for(auto &i: li)
		cout << i << endl;
}
