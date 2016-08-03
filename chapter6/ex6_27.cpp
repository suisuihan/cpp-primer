#include <iostream>
#include <string>
using namespace std;

int sum(initializer_list<int> il){
    int ret = 0;
    for(auto beg = il.begin(); beg != il.end(); beg++){
        ret += (*beg);
    }
    return ret;
}
int main(int argc, char **argv){
    int result = sum({1,2,3});
    cout << result << endl;

    return 0;
}

