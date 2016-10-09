#ifndef EX_13_18_H
#define EX_13_18_H

class Employee{
public:
    Employeee(){
        id = unique++;
    }
    Employee(std::string &s){
        name = s;
        id = unique++;
    }
private:
    string name;
    int id;
    static int unique;
}

int Employee::unique = 0;

#endif