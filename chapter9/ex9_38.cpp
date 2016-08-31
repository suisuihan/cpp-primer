#include <vector>
#include <iostream>
using namespace std;


int main(){
    vector<int> vec;
    int i = 0;
    while(i < 1000){
        vec.push_back(i++);
        cout << vec.size() << " " << vec.capacity() << endl;
    }
}
