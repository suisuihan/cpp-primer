#include <fstream>
#include <vector>
#include <iostream>
#include <vector>
using namespace std;

void readFile(string fileName, vector<string> &vec){
    string buf;
    ifstream input(fileName);
    if(input){
        while(getline(input, buf))
            vec.push_back(buf);
    }
}

int main(){
    vector<string> myVec;
    readFile("example.txt", myVec);
    for(auto item: myVec){
        cout << item << endl;
    }
}
