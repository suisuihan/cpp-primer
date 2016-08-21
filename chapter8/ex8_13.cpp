#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


bool valid(const string& phoneNumber){
    for(auto c: phoneNumber){
        if(!isdigit(c))
            return false;
    }
    return true;
}

string format(const string& num){
    return "86-"+num;
}

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(int argc, char* argv[]){
    if(argc < 2){
        cout << "arguments is not enough"<<endl;
        exit(1);
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    string fileName = argv[1];
    ifstream input(fileName);
    while(getline(input, line)){
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while(record >> word)
            info.phones.push_back(word);
        people.push_back(info);
        record.clear();
    }

    for(const auto &entry: people){
        ostringstream formatted, badNums;
        for(const auto &nums: entry.phones){
            if(!valid(nums)){
                badNums << " " << nums;
            }else{
                formatted << " " << format(nums);       
            }
        }
        if(badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name
                << "invalid number(s) " << badNums.str() << endl;
    }
}
