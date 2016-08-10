#ifndef EX7_30H
#define EX7_30H

#include <string>

class Y;
class X{
public:
    Y *y;
};
class Y{
public:
    X x;
};

#endif