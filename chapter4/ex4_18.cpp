#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
    vector<int> v{1,2,3};
    auto pbeg = v.begin();
    while(pbeg != v.end() && *pbeg > 0)
        std::cout << *++pbeg << std::endl;
    return 0;
}