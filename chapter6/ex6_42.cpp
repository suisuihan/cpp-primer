#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr, const string &word, const string &end = "s"){
    return (ctr > 1)? word + end: word;
}

int main(){
    string successStr = "sucess";
    string failureStr = "failure";

    cout << make_plural(1, successStr, "es") << endl;
    cout << make_plural(2, successStr, "es") << endl;
    cout << make_plural(1, failureStr) << endl;
    cout << make_plural(2, failureStr) << endl;

    return 0;
}