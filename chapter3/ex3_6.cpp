#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string s;
    getline(cin,s);
    for(auto &c: s)
        c = 'X';
    cout << "string is " << s << endl;
}
