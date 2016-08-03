#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
void printValue(vector<T>::const_iterator itrBegin, vector<T>::const_iterator itrEnd){
    if(itrBegin != itrEnd){
        cout << *itrBegin << endl;
        printValue(++itrBegin, itrEnd);

    }
}

int main(int argc, char **argv){
    vector<int> ivec{1,2,3};
    printValue(ivec.begin(), ivec.end());

    return 0;
}

