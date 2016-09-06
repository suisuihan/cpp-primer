#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	int m = 10;
	auto f = [m](int a){return a+m;};
	cout << f(1)  << endl;
}
