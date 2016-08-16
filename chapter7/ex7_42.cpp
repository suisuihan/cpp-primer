#include <string>
#include <iostream>
#include "ex7_42.h"

using namespace std;

int main(){
    Date myDate1(1988,1,1);
    Date myDate2;
    cout << "myDate1 is " << myDate1.getYear() << "-" << myDate1.getMon() << "-" << myDate1.getDate() << endl;
    cout << "myDate2 is " << myDate2.getYear() << "-" << myDate2.getMon() << "-" << myDate2.getDate() << endl;
}
