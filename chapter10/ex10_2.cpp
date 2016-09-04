#include <string>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(){
	list<string> li{"a", "b", "c"};
	cout << count(li.cbegin(), li.cend(), "a") << endl;
	cout << count(li.cbegin(), li.cend(),"d") << endl;
}