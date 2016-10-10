#include <iostream>

using namespace std;

class HasPtr{
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0), use(new size_t(1)){}
    HasPtr(const HasPtr &hp):ps(hp.ps), i(hp.i), use(hp.use) {++*use;}
    HasPtr& operator=(const HasPtr &hp){
        ++*hp.use;
        if(--*use == 0){
            cout << *hp.use << endl;
            cout << *use << endl;
            delete ps;
            delete use;
            cout << "delete" << endl;
        }
        ps = hp.ps;
        i = hp.i;
        use = hp.use;
        cout << "operator" << endl;
        return *this;
    }
    ~HasPtr(){
        // cout << "destroy" << endl;
        cout << "destory: use=" << *use << endl;
        if(--*use == 0){
            delete ps;
            delete use;
            cout << "~HasPtr"  << endl;
        }
    }
private:
    string *ps;
    int i;
    size_t *use;
};


int main(){
    HasPtr a;
    cout << "_____________" << endl;
    HasPtr b;
    cout << "_____________" << endl;
    b = a;
    cout << "_____________" << endl;
}
