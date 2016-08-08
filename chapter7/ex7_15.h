#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person{
    Persons(std::string &myName, std::string &myAddr):
        name(myName), address(myAddr){}
    std::string name;
    std::string address;
    std::string getName() const {return name;};
    std::string getAddress() const {return address;};
};

std::istream &read(std::istream is, Person &p){
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p){
    os << p.getName() << " " << p.getAddress() << " ";
    return os;
}

#endif