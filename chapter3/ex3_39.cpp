#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main(int argc, char** argv){
    //c string
    char carr1[] = "what";
    char carr2[] = "what";
    auto cmpRet = strcmp(carr1, carr2);
    if(cmpRet==0)
        cout << carr1 << " == " << carr2 << endl;
    else if(cmpRet<0)
        cout << carr1 << " < " << carr2 << endl;
    else
        cout << carr1 << " > " << carr2 << endl;

    //c++ string
    string s1("abc");
    string s2("abc");
    if(s1 == s2)
        cout << s1 << " == " << s2 << endl;
    else if(s1 < s2)
        cout << s1 << " < " << s2 << endl;
    else
        cout << s1 << " > " << s2 << endl;
}
