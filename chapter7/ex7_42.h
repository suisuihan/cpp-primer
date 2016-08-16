#ifndef EX7_42H
#define EX7_42H

class Date{
public:
    Date(int myyear, int mymon, int mydate):year(myyear), mon(mymon), date(mydate){}
    Date(): Date(1977, 0, 0){}
    int getDate(){return date;}
    int getYear(){return year;}
    int getMon(){return date;}

private:
    int year;
    int mon;
    int date;
};

#endif