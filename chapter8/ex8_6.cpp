#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
#include "../chapter7/ex7_26.h"
using namespace std;

int main(int argc, char* argv[]){
    if( argc < 2){
        cerr << "arguments are not enough" << endl;
        exit(1);
    }
    string fileName = argv[1];
    ifstream input(fileName);
    if(input){
        Sales_data total;
        if(read(input, total)){
            Sales_data trans;
            while(read(input, trans)){
                if(total.isbn() == trans.isbn())
                    total.combine(trans);
                else{
                    print(cout, total) << endl;
                    total = trans;
                }
            }
            print(cout, total) << endl;
        }else{
            cerr << "No data?!" << endl;
        }
    }
}
