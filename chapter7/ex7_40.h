#ifndef EX7_40H
#define EX7_40H

class Date{
public:
    Date(int myyear, int mymon, int mydate):year(myyear), mon(mymon), date(mydate){}
    Date(){
        year=1977;
        mon=0;
        date=0;}
    int getDate(){return date;}
    int getYear(){return year;}
    int getMon(){return date;}

private:
    int year;
    int mon;
    int date;
};

#endif