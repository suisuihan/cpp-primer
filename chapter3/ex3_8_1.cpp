#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string s;
    getline(cin,s);
    decltype(s.size()) index = 0, strLen = s.size();
    while(index != strLen){
        s[index] = 'X';
        index++;
    }
    cout << "string is " << s << endl;
}
