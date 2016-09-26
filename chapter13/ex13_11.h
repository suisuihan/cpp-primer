#ifndef EX_13_11_H
#define EX_13_11_H

#include <string>
using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) { }
    HasPtr(HasPtr &hp):ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(HasPtr &hp){
        if(this != &hp){
            auto newPtr = new string(*hp.ps);
            delete ps;
            ps = newPtr;
            i = hp.i;
        }
        return *this;
    } 
    ~HasPtr(){
        if(ps != nullptr)
            delete ps;
    }
private:
    std::string *ps;
    int i;
};

#endif