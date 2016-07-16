#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, char** argv){
    vector<int> vecInt;
    int inputInt;
    int index = 0;
    while(cin >> inputInt && index++ < 10)
        vecInt.push_back(inputInt);
    
    for(auto num: vecInt)
        cout << num << " ";
    cout << endl;
    for(auto itr=vecInt.begin(); itr != vecInt.end(); itr++){
        (*itr) = (*itr) * (*itr);
        cout << (*itr) << " ";
    }

}
