#include <iostream>
#include <vector>
using namespace std;


using PF = int(*)(int a, int b);
int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}


int mul(int a, int b){
    return a*b;
}


int divide(int a, int b){
    if( b != 0)
        return a/b;
    else
        return 0;
}


int main(){
    vector<PF> vecpf;
    vecpf.push_back(&add);
    vecpf.push_back(&sub);
    vecpf.push_back(&mul);
    vecpf.push_back(&divide);
    for(auto func: vecpf)
        cout << func(4,2) << endl;
}