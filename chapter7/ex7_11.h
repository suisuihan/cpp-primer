#ifndef EX7_11H
#define EX7_11H

#include <string>
#include <istream>
#include <ostream>

struct Sales_data{
    Sales_data() = default;
    Sales_data(const std::string &s, unsigned sold, double rev):
         bookNo(s), units_sold(sold), revenue(rev) {}
    std::string isbn() const {return bookNo;};
    Sales_data &combine(const Sales_data &);
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