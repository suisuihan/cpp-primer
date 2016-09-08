#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;


int main(){
	int m = 5;
	auto f = [m] ()mutable ->bool {if(m!=0){--m; return true;} else return false;};
	while(f()){
		cout << "true" << endl;
		cout << m << endl;
	}
	cout << "false" << endl;
}
