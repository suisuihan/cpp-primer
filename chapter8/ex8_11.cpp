#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(){
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin, line)){
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
        record.clear();
    }

    for (auto &p: people){
        cout << p.name << " ";
        for(auto &num: p.phones)
            cout << num << " ";
        cout << endl;
    }
}
