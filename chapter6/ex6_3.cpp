#include <iostream>

using namespace std;

int fact(int val){
    int ret = 1;
    for(; val > 1; val--)
        ret *= val;
    return ret;
}

int main(){
    cout << "please enter the number:";
    int m;
    cin >> m;
    cout << fact(m) << endl;
    cout << fact(m) << endl;
}

