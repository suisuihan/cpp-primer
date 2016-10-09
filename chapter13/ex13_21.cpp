#include "ex13_21.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <sstream>

using namespace std;

int main(){
    ifstream infile("README.md");
    map<string, set<int>> wordNums;
    vector<string> linesMsg;
    string word;
    string line;
    int lineIndex = 0;
    while(getline(infile, line)){
        linesMsg.push_back(line);
        istringstream words(line);
        while(words >> word){
            wordNums[word].insert(lineIndex);
        }
        ++lineIndex;
    }
    while(true){
        cout << "please enter the word to look for, or q to quit: ";
        cin >> word;
        if(word == "q") break;
        cout << word << " occurs " << wordNums[word].size() << " times" << endl;
        for(auto &i: wordNums[word])
            cout << "    (line: " << i << ")" << linesMsg[i] << endl;
        cout << endl;
    }
}






















