#include <iostream>
using namespace std;



void f(){
    cout << "this if f()" << endl;
}

void f(int a){
    cout << "this if f(int a), a = " << a << endl;
}

void f(int a, int b){
    cout << "this if f(int a, int b), a="<< a << ", b=" << b << endl;
}

void f(double a, double b = 3.14){
    cout << "this if f(double a, double b), a="<< a << ", b=" << b << endl;
}


int main()
{
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    f(2.56, 42);
    return 0;
}