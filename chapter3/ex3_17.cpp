#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;


int main(int argc, char** argv){
    string inputStr;
    vector<string> vecStr;
    while(cin >> inputStr)
        vecStr.push_back(inputStr);
    cout << "Before:" << endl;
    for(auto s: vecStr)
        cout << s << " ";
    cout << endl;
    for(auto &s: vecStr)
        for(auto &c: s)
            c = toupper(c);
    cout << "After:" << endl;
    for(auto s: vecStr)
        cout << s << " ";     
    cout << endl;   
}
