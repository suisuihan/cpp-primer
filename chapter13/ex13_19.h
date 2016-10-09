#ifndef EX_13_19_H
#define EX_13_19_H

class Employee{
public:
    Employeee(){
        id = unique++;
    }
    Employee(std::string &s){
        name = s;
        id = unique++;
    }
    Employee(Employee &e) = delete;
    Employee& operator=(Employee &e) = delete;
private:
    std::string name;
    int id;
    static int unique;
}

int Employee::unique = 0;

#endif