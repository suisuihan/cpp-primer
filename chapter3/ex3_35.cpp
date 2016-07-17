#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv){
    int ia[10];
    cout << "before init:" << endl;
    for(auto i: ia)
        cout << i << " ";
    cout << endl;

    cout << "after init:" << endl;
    for(auto p = begin(ia); p != end(ia); p++)
        *p = 0;
    for(auto i: ia)
        cout << i << " ";
    cout << endl;
}
