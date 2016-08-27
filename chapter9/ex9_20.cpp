#include <list>
#include <deque>
#include <iostream>
using namespace std;


int main(){
    list<int> testList{1,2,3,3,4,4,5};
    deque<int> dq1;
    deque<int> dq2;
    for(auto i: testList){
        if (i%2==0)
            dq1.push_back(i);
        else
            dq2.push_back(i);
    }    

    for(auto i: dq1)
        cout << i << " ";
    cout << endl;
    for(auto i: dq2)
        cout << i << " ";

}
