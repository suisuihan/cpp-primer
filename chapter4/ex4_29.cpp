#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    int x[10]={1,2,3}, *p = x;
    cout << sizeof(x)/ sizeof(*x) << endl;
    cout << sizeof(x)/ sizeof(*p) << endl;
    cout << "*x is:" << *x << endl;
    cout << "*p is:" << *p << endl;
    cout << "*x type is: " << typeid(*x).name() << endl
         << "*p type is: " << typeid(*p).name() << endl;
}