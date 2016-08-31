#include <vector>
#include <iostream>
#include <string>
using namespace std;


int main(){
    vector<char> vec{'a','b'};
    string str(vec.cbegin(), vec.cend());
    cout << str << endl;
}
