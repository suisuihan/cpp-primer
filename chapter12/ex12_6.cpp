#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <algorithm>
#include <iterator>
using namespace std;

vector<int>* newVector(){
    return new vector<int>;
}

vector<int>* writeVector(vector<int>* vec){
    int i = 0;
    while(cin >> i){
        vec->push_back(i);
    }
    return vec;
}

void readVector(vector<int>* vec){
    copy(vec->cbegin(), vec->cend(), ostream_iterator<int>(cout, " "));
    delete vec;
}



int main(){
    readVector(writeVector(newVector()));
}






















