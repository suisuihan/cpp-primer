#ifndef EX7_57H
#define EX7_57H

class Account{
public:
    static double rate(){return interestRate;}
    static void rate(double);
    void calculate(){amount += amount * interestRate;}

private:
    std::string owner;
    double amount;
    static constexpr int period = 30l
    double daily_tbl[period];
    static double interestRate;
    static double initRate(){return currRate;}
    static constexpr double currRate = 0.001;
};

void Account::rate(double newRate){
    interestRate = newRate;
}

double Account::interestRate = initRate();

#endif