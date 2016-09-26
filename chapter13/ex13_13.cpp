#include <string>
#include <iostream>
#include <vector>
#include "ex13_13.h"

using namespace std;

void testX(X m){

}

int main(){
    X a;
    X b(a);
    X c = a;
    c = b;
    X *d = new X;
    // testX(a);
    // vector<X> vec;
    // vec.push_back(a);
}