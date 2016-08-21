#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
#include "ex8_1.h"
#include <sstream>
using namespace std;

int main(){
    string myStr = "go ahead";
    istringstream iss(myStr);
    printData(iss);
}
