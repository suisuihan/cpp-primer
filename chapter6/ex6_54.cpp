#include <iostream>
#include <vector>
using namespace std;


int f1(int a, int b){
    cout << "this if f1()" << endl;
    return 0;
}

int f2(int a, int b){
    cout << "this if f2()" << endl;
    return 0;
}

using PF = int(*)(int a, int b);

int main()
{
    vector<PF> vecpf;
}