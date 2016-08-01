#include <iostream>

using namespace std;

void reset(int &num){
    num  = 1;
}

int main(){
    int a = 0;
    reset(a);
    cout << a << endl;
}

