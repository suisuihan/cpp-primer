#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string inputStr;
    vector<string> vecStr;
    while(cin >> inputStr)
        vecStr.push_back(inputStr);
    for(auto s: vecStr)
        cout << s << " ";
    cout << endl;
}
