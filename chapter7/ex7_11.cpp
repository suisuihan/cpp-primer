#include <string>
#include <iostream>
#include "ex7_11.h"

using namespace std;

int main(){
    Sales_data a;
    Sales_data b("123", 12, 222);
    print(cout, a) << endl;
    print(cout, b) << endl;
}