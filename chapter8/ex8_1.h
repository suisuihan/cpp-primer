#ifndef EX8_1_H
#define EX8_1_H
#include <istream>


std::istream & printData(std::istream& is){
    std::string s;
    while(is >> s){
        std::cout << s << std::endl;
    }
    is.clear();
    return is;
}

#endif