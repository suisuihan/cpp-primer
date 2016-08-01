#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int cmpInt(const int a, const int *b){
    return a> (*b) ? a : *b;
}

int main(){
    int a = 1, b =2;
    cout << cmpInt(a, &b) << endl;

    return 0;
}

