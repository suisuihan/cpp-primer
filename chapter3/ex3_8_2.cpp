#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string s;
    getline(cin,s);
    decltype(s.size()) index = 0, strLen = s.size();
    for(;index != strLen; index++)
        s[index] = 'X';
    cout << "string is " << s << endl;
}
