#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void swapPoint(int **a, int **b){
    int *p = *a;
    *a = *b;
    *b = p;
}

int main(){
    int a = 1, b =2;
    int *pa = &a;
    int *pb = &b;
    swapPoint(&pa, &pb);
    cout << "a = " << a << "  b = " << b << endl;
    cout << "*pa=" << *pa << " *b=" << *pb << endl;

    return 0;
}

