#ifndef EX_13_13_H
#define EX_13_13_H

#include <string>
#include <iostream>

struct X{
    X() {std::cout << "X()" << std::endl;}
    X(const X&){std::cout << "X(const X&)" << std::endl;}
    X& operator=(const X&){std::cout << "X=" << std::endl; return *this;}
    ~X(){std::cout << "~x()" << std::endl;}
};
#endif