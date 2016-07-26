#include <iostream>
// #include <pair>
using namespace std;

int main(){
    pair<string, int> max_successive_words = {"", 0};
    int count = 0;
    string inputstr, prestr;
    while(cin >> inputstr){
        if(inputstr == prestr)
            ++count;
        else
            count = 1;
        if(max_successive_words.second < count)
            max_successive_words = {inputstr, count};
        prestr = inputstr;
    }
    
    if(max_successive_words.second == 0)
        cout << "nothing happens" << endl;
    else
        cout << "string is: " << max_successive_words.first << ", appears " << max_successive_words.second << " times" << endl;
    return 0;
}