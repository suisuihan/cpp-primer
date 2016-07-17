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
        for(auto itr = vecInt.cbegin(); itr != vecInt.cend()-1; itr++)
            cout << "sum is: " << *itr + *(itr+1) << endl;
    }
    cout << endl;

    
    cout << "the left and right sum:" << endl;    
    if(vecLen == 0)
        cout << "the vec is empty" << endl;
    else if(vecLen == 1){
        cout << "the vec only has one item: " << vecInt[0] << endl;
    }
    else{
        for(auto itr = vecInt.cbegin(); itr != vecInt.cend(); itr++){
            if(itr == vecInt.cbegin()+vecInt.size()/2){
                if(vecLen%2 == 1)
                    cout << "sum is: " << *itr << endl;
                break;
            }
            cout << "sum is: " 
                <<  *itr + *(vecInt.cend() - (itr-vecInt.begin())-1) << endl;
        }
    }
    cout << endl;
}
