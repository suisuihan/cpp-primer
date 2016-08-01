#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool hasCapital(const string &s){
    for(auto itr = s.cbegin(); itr != s.cend(); itr++){
        if(isupper(*itr))
            return true;
    }
    return false;
}

void toLowchar(string &s){
    for(auto itr = s.begin(); itr != s.end(); itr++)
        *itr = tolower(*itr);
}

int main(){
    string s = "HellO";
    if(hasCapital(s)){
        cout << "s has capital" << endl;
        toLowchar(s);
    }

    cout << "s is " << s << endl;

    return 0;
}

