#include <string>
#include <iostream>
#include "ex7_12.h"

using namespace std;

int main(){
    Sales_data total(cin);
    while(cin){
        Sales_data trans(cin);
        if(total.isbn() == trans.isbn())
            total.combine(trans);
        else{
            print(cout, total) << endl;
            total = trans;
        }
    }

    print(cout, total) << endl;
}