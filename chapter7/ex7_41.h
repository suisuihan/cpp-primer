#ifndef EX7_41H
#define EX7_41H

#include <string>
#include <istream>
#include <ostream>


struct Sales_data;
std::istream &read(std::istream &is, Sales_data &b);

struct Sales_data{
friend std::istream &read(std::istream &is, Sales_data &b);
friend std::ostream &print(std::ostream &os, const Sales_data &b);
friend Sales_data add(const Sales_data &a, Sales_data &b);
public:
    Sales_data(const std::string &s, unsigned sold, double rev):
         bookNo(s), units_sold(sold), revenue(rev) {std::cout << "this is three arguments constructor"<< std::endl;}
    Sales_data():Sales_data("",0,0) {std::cout << "this is default constructor"<< std::endl;}
    Sales_data(const std::string &s):Sales_data(s,0,0) {std::cout << "this is one argument constructor"<< std::endl;}
    Sales_data(std::istream &is){
        read(is, *this);
    }
    std::string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &);
    inline double avg_price(){
        if(units_sold == 0)
            return 0.0;
        else
            return revenue/units_sold;
    }
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


 Sales_data &Sales_data::combine(const Sales_data &b){
     units_sold += b.units_sold;
     revenue += b.revenue;
     return *this;
 }

std::istream &read(std::istream &is, Sales_data &b){
    is >> b.bookNo >> b.units_sold >> b.revenue;
    return is;    
}

std::ostream &print(std::ostream &os, const Sales_data &b){
    os << b.isbn() << " " << b.units_sold << " " << b.revenue;
    return os;
}

Sales_data add(const Sales_data &a, Sales_data &b){
    Sales_data sum = a;
    sum.combine(b);
    return sum;
}

#endif