#include <iostream>

using namespace std;

void swap(int &aval, int &bval){
    int temp = aval;
    aval = bval;
    bval = temp;
}

int main(){
    int a = 1, b = 2;
    swap(a, b);
    cout << a << " " << b << endl;
}

