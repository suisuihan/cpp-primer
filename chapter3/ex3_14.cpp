#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv){
    int inputInt(0);
    vector<int> vecInt;
    while(cin >> inputInt)
        vecInt.push_back(inputInt);
    for(auto i: vecInt)
        cout << i << " ";
    cout << endl;
}
