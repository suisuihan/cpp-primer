#ifndef SALES_DATA_H
#define SALES_DATA_H
struct Sales_data{
    std::string bookNo;
    std::string author;
    std::string publisher;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double discount = 1.0;
};
#endif