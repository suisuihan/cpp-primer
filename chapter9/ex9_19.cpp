#include <list>
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

void setDeque(istream& in, list<string>& strList){
    string element;
    while(in >> element)
        strList.push_back(element);
    in.clear();
}

void printDeque(ostream& out, const list<string>& strList){
    for(auto begin=strList.cbegin(), end=strList.cend(); begin!=end; begin++)
        out << *begin << endl; 
}

int main(){
    list<string> testList;
    setDeque(cin, testList);
    printDeque(cout, testList);

}
