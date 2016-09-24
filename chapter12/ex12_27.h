#ifndef EX_12_27_H
#define EX_12_27_H

#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <memory>

using namespace std;

class QueryResult{
public:
    friend ostream& print(ostream &, QueryResult&);
    QueryResult(string s, shared_ptr<set<int>> linenums, shared_ptr<vector<string>> inputlines):
        word(s), lineNums(linenums), lines(inputlines) { };
    
private:
    string word;
    shared_ptr<set<int>> lineNums;
    shared_ptr<vector<string>> lines;
    
};


class TextQuery{
public:
    TextQuery(ifstream &infile);
    QueryResult query(string& s);
private:
    shared_ptr<vector<string>> lines;
    map<string, shared_ptr<set<int>>> wordInfo;
};

TextQuery::TextQuery(ifstream &infile): lines(new vector<string>){
    string line;
    int lineNum = 0;
    while(getline(infile, line)){
        lines->push_back(line);
        istringstream inss(line);
        string word;
        while(inss >> word){
            auto &linenums = wordInfo[word];
            if(!linenums)
                linenums.reset(new set<int>);
            linenums->insert(lineNum);
        }
        lineNum++;
    }
};

QueryResult TextQuery::query(string& s){
    static shared_ptr<set<int>> lineNum(new set<int>);
    auto iterIndex = wordInfo.find(s);
    if(iterIndex == wordInfo.end())
        return QueryResult(s, lineNum, lines);
    else
        return QueryResult(s, wordInfo[s], lines);
}


ostream& print(ostream &os, QueryResult &qt){
    for(auto &i: *qt.lineNums)
        os << "(line: " << i << ")" << qt.lines->at(i) << endl;
    return os; 
};


#endif