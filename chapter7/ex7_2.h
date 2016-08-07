#ifndef EX7_2H
#define EX7_2H

#include <string>

struct Sales_data{
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

#endif