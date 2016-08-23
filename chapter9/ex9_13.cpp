#include <fstream>
#include <vector>
#include <iostream>
#include <list>
using namespace std;


int main(){
    list<int> mylist{1,2,3};
    vector<double> myVec1(mylist.cbegin(), mylist.cend());
    vector<int> myIntVec{1,2,3};
    vector<double> myVec2(myIntVec.cbegin(), myIntVec.cend());
    cout << "myVec1:" << endl;
    for(auto value: myVec1)
        cout << "  " << value << endl;
    cout << "myVec2:" << endl;
    for(auto value: myVec2)
        cout << "  " << value << endl;
}
