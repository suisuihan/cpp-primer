#include <iostream>
#include <istream>
#include "ex8_1.h"
using namespace std;

int main(){
    string str;
    istream &is = printData(cin);
    cout << "out of printData" << endl;
    is >> str;
    cout << str << endl;
}




