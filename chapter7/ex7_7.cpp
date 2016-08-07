#include <iostream>
#include "ex7_6.h"

using namespace std;


int main(){
    Sales_data total;
    if(read(cin, total)){
        Sales_data trans;
        while(read(cin, trans)){
            if(trans.isbn() == total.isbn()){
                total.combine(trans);
            }else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total)<< endl;
    }else{
        cout << "no book any more!" << endl;
    }
}
