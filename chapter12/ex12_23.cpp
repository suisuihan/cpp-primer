#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char* str1 = "abcd";
    char* str2 = "efgh";
    char* p = new char[100];
    
    strcat(p, str1);
    strcat(p, str2);
    cout << p << endl;

    string str3("ghi"), str4("jkl");
    cout << str3 + str4 << endl;
}






















