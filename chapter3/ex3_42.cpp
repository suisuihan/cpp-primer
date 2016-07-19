#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv){
    vector<int> ivec{1,2,3};
    int a[ivec.size()];
    int index = 0;
    for(auto i: ivec)
        a[index++]=i;
    for(auto value: a)
        cout << value << " ";
    cout << endl;
}
