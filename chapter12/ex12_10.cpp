#include <iostream>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr){
    cout << "ptr.use_count()=" << ptr.use_count() << endl;
}

int main(){
    shared_ptr<int> p(new int(42));
    cout << *p << endl;
    cout << "p.use_count()=" << p.use_count() << endl;
    process(shared_ptr<int>(p));
    cout << *p << endl;
    cout << "p.use_count()=" << p.use_count() << endl;
    
}






















