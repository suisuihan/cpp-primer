#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char** argv){
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
    cout << "i type is " << typeid(i).name() << endl
		 << "j type is " << typeid(j).name() << endl
		 << "k type is " << typeid(k).name() << endl
		 << "p type is " << typeid(p).name() << endl
		 << "j2 type is " << typeid(j2).name() << endl
		 << "k2 type is " << typeid(k2).name() << endl;
}
