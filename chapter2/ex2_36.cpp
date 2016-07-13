#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char** argv){
	int i = 0, &r = i;
	auto a = i;
	decltype(i) b = i;
	auto c = r;
	decltype(r) d = r;
	decltype((i)) e = i;
	a++;
	cout << "i="<<i<<endl;
	b++;
	cout << "i="<<i<<endl;
	c++;
	cout << "i="<<i<<endl;
	d++;
	cout << "i="<<i<<endl;
	e++;
	cout << "i="<<i<<endl;
}
