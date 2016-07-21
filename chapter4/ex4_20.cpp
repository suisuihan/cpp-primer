#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
    vector<string> v{"abc","def","ghi","jkl"};
    auto iter = v.begin();
    cout << *iter++ << endl;
    cout <<(*iter)++ << endl;
    cout << *iter.empty() << endl;
    cout << iter->empty() << endl;
    cout << ++*iter << endl;
    cout << iter++->empty() << endl;
    return 0;
}