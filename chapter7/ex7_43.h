#ifndef EX7_43H
#define EX7_43H

class NoDefault{
public:
    NoDefault(int what):whocare(what){}
    int getValue() const{return whocare;}
private:
    int whocare;
};


class C{
public:
    C():c_member(1){
    }
    NoDefault getValue() const {return c_member;}
private:
    NoDefault c_member;
};

#endif