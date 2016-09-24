#include <iostream>
#include <memory>
using namespace std;

int main(){
    string s="hello world";
    allocator<string> alloc;
    auto const p = alloc.allocate(10);
    uninitialized_fill_n(p, 9, s);
    auto q = p;
    while(q!=p+9){
        cout << *q << endl;
        alloc.destroy(q++);
    }
    alloc.deallocate(p, 10);
}






















