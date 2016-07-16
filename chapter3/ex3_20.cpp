#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv){
    int inputInt(0);
    vector<int> vecInt;
    while(cin >> inputInt)
        vecInt.push_back(inputInt);
    
    cout << "the neighbour's sum:" << endl;
    decltype(vecInt.size()) index=1;
    auto vecLen = vecInt.size();
    if(vecLen == 0)
        cout << "the vec is empty" << endl;
    else if(vecLen == 1){
        cout << "the vec only has one item: " << vecInt[0] << endl;
    }
    else{
        for(; index < vecLen; index++)
            cout << "sum of " << (index-1) << " and " 
                << index << " is: " << vecInt[index-1] + vecInt[index] << endl;
    }
    cout << endl;

    
    cout << "the left and right sum:" << endl;    
    if(vecLen == 0)
        cout << "the vec is empty" << endl;
    else if(vecLen == 1){
        cout << "the vec only has one item: " << vecInt[0] << endl;
    }
    else{
        for(index = 0; index < vecLen; index++){
            if(index == vecLen/2){
                if(vecLen%2 == 1)
                    cout << "index " << index << " is: " << vecInt[index] << endl;
                break;
            }
            cout << "sum of " << index << " and " 
                << (vecLen - index -1) << " is: " 
                << vecInt[index] + vecInt[vecLen-index-1] << endl;
        }
    }
    cout << endl;
}
