#include <iostream>

using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr&, HasPtr&);
    // HasPtr() = default;
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { cout << "constructor" << endl; }
    HasPtr(HasPtr &hp):ps(new string(*hp.ps)), i(hp.i){ cout << "copy constructor" << endl;}
    HasPtr(HasPtr &&hp):ps(new string(*hp.ps)), i(hp.i){
         hp.ps = nullptr;
         cout << "move constuctor" << endl;
    }
    HasPtr& operator=(HasPtr &hp){
        if(this == &hp)
            return *this;
        ps = new string(*hp.ps);
        i = hp.i;
        cout << "copy-assignment operator" << endl;
        return * this;
    }
    HasPtr& operator=(HasPtr &&hp){
        if(this == &hp)
            return *this;
        delete ps;
        ps = hp.ps;
        i = hp.i;
        hp.ps = nullptr;
        cout << "move-assignment operator" << endl;
        return * this;
    }
    
    ~HasPtr(){
        delete ps;
        cout << "destructor" << endl;
    }

    string getPSValue(){
        return *ps;
    }

private:
    string *ps;
    int i;
};

inline void swap(HasPtr& lhs, HasPtr& rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    cout << "in swap" << endl;
}

HasPtr createHasPtr(){
    return HasPtr("this is create function");
}

int main(){
    HasPtr a("abc");
    HasPtr b("def");
    cout << a.getPSValue() << endl;
    cout << b.getPSValue() << endl;

    swap(a, b);
    cout << a.getPSValue() << endl;
    cout << b.getPSValue() << endl;
}
