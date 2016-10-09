#include <iostream>

using namespace std;

class HasPtr{
public:
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

HasPtr createHasPtr(){
    return HasPtr("this is create function");
}

int main(){
    HasPtr a;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    HasPtr b("this is b");
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    HasPtr c = b;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    c = createHasPtr();
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    c = a;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    HasPtr e = createHasPtr();
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    e = e;
    cout << "<<<<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}
