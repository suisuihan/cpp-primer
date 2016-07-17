#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv){
    int ia[10];
    for(size_t index=0; index<10; index++)
        ia[index] = index;
    
    //array
    int ia2[10];
    for(size_t index=0; index<10; index++)
        ia2[index] = ia[index];
    for(auto i: ia2)
        cout << i << " ";
    cout << endl;

    //vector
    vector<int> ivec1(10,0);
    for(int i; i < 10; i++)
        ivec1[i]=i;
    vector<int> ivec2(ivec1);
    for(auto i: ivec2)
        cout << i << " ";
    cout << endl;
}
