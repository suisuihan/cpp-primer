#include "ex12_27.h"
#include <iostream>

using namespace std;

int main(){
    ifstream infile("README.md");
    TextQuery tq(infile);
    while(true){
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || s=="q") break;
        auto qr = tq.query(s);
        print(cout, qr) << endl;
    }
}






















