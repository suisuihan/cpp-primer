#include <list>
#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<string> vec;
    string word;
    auto iter = vec.begin();
    while(cin >> word)
        iter = vec.insert(iter, word);
    for(auto w: vec)
        cout << w << endl;
}
