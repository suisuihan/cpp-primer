#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	auto f = [](int a, int b){return a+b;};
	cout << f(1,2)  << endl;
}
