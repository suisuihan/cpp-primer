#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
#include "../chapter7/ex7_26.h"
using namespace std;

int main(int argc, char* argv[]){
    if( argc < 3){
        cerr << "arguments are not enough" << endl;
        exit(1);
    }
    string fileName = argv[1];
    string outputFileName = argv[2];
    ifstream input(fileName);
    ofstream output(outputFileName);
    if(input){
        Sales_data total;
        if(read(input, total)){
            Sales_data trans;
            while(read(input, trans)){
                if(total.isbn() == trans.isbn())
                    total.combine(trans);
                else{
                    print(output, total) << endl;
                    total = trans;
                }
            }
            print(output, total) << endl;
        }else{
            cerr << "No data?!" << endl;
        }
    }
}
