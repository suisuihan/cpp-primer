#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void print(const int i){
    cout << i << endl;
}

void print(const int *arr, size_t size){
    for(size_t index = 0; index < size; index++)
        cout << arr[index] << endl;
}

int main(){
    int a = 1, b[2] ={0,1};
    print(a);
    print(b, 2);
    return 0;
}

