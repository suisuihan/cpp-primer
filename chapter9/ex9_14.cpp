#include <fstream>
#include <vector>
#include <iostream>
#include <list>
using namespace std;


int main(){
    list<char *> myList{"aa", "bb", "cc"};
    vector<string> myVec;
    myVec.assign(myList.cbegin(), myList.cend());
    for(auto &s: myVec)
        cout << s << endl;
}
