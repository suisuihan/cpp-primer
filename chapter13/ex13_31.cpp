#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class HasPtr{
public:
    friend void swap(HasPtr&, HasPtr&);
    friend bool operator<(const HasPtr&, const HasPtr&);

    // HasPtr() = default;
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { /*cout << "constructor" << endl;*/ }
    HasPtr(const HasPtr &hp):ps(new string(*hp.ps)), i(hp.i){ cout << "copy constructor" << endl;}
    HasPtr(HasPtr &&hp):ps(new string(*hp.ps)), i(hp.i){
         hp.ps = nullptr;
         cout << "move constuctor" << endl;
    }
    
    // void swap(HasPtr &rhs) 
    // {
    //     using std::swap;
    //     swap(ps, rhs.ps);
    //     swap(i, rhs.i);
    //     std::cout << "call swap(HasPtr &rhs)" << std::endl;
    // }

    HasPtr& operator=(HasPtr tmp) 
    {
        // this->swap(tmp);
        swap(*this, tmp);
        cout << "move-assignment operator" << endl;
        return *this;
    }

    // bool operator<(const HasPtr&);
    
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

void swap(HasPtr& lhs, HasPtr& rhs){
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    // lhs.swap(rhs);
    cout << "in swap" << endl;
}

bool operator<(const HasPtr &lhs, const HasPtr &rhs){
    cout << "in <" << endl;
    return *lhs.ps < *rhs.ps;
    
}

int main(){
    HasPtr a("abc");
    HasPtr b("def");
    HasPtr c("aa");
    vector<HasPtr> vec{a, b, c};
    cout << "________________________" << endl;
    std::sort(vec.begin(), vec.end());
    cout << "________________________" << endl;

}
