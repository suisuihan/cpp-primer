#include <iostream>
#include "ex7_2.h"

using namespace std;


int main(){
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue){
            if(trans.isbn() == total.isbn()){
                total.combine(trans);
            }else{
                cout << total.bookNo << " " << total.units_sold
                    << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }else{
        cout << "no book any more!" << endl;
    }
}
