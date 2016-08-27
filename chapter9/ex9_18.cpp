#include <deque>
#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

void setDeque(istream& in, deque<string>& dq){
    string element;
    while(in >> element)
        dq.push_back(element);
    in.clear();
}

void printDeque(ostream& out, const deque<string>& dq){
    for(auto begin=dq.cbegin(), end=dq.cend(); begin!=end; begin++)
        out << *begin << endl; 
}

int main(){
    deque<string> testDeque;
    setDeque(cin, testDeque);
    printDeque(cout, testDeque);
}
