#include <string>
#include <iostream>

using namespace std;

class numbered{
public:
    numbered(){
        mysn = unique++;
    }

    int mysn;
    static int unique;
};

int numbered::unique = 1;

void f(numbered s){
    cout << s.mysn << endl;
}

int main(){
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);
}