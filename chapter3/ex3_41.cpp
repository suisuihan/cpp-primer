#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv){
    int a[] = {1,2,3};
    vector<int> ivec(begin(a), end(a));
    for(auto i: ivec)
        cout << i << " ";
    cout << endl;
}
