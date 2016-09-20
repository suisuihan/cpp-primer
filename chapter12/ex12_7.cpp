#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <algorithm>
#include <iterator>
using namespace std;

shared_ptr<vector<int>> newVector(){
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> writeVector(shared_ptr<vector<int>> vec){
    int i = 0;
    while(cin >> i){
        vec->push_back(i);
    }
    return vec;
}

void readVector(shared_ptr<vector<int>> vec){
    copy(vec->cbegin(), vec->cend(), ostream_iterator<int>(cout, " "));
}



int main(){
    readVector(writeVector(newVector()));
}






















