#ifndef EX7_23H
#define EX7_23H

#include <string>

class Screen{
public:
    typedef std::string::size_type pos;
    char get() const {return const[cursor]};
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif