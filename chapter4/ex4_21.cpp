#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
    vector<int> v{1,2,3,4};
    for(auto &ivec: v)
        ivec%2?ivec=ivec*2:0;
    for(auto &ivec: v)
    	cout << ivec << endl;
}