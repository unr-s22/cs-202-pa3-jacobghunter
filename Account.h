#ifndef CODE_ACCCOUNT_H
#define CODE_ACCCOUNT_H

#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>
#include <functional>
#include "Money.h"

class Account : public Money {
    int d, c;
    bool update_balance = false;
    int deposits_count = 0;
    int withdrawls_count = 0;
    
    std::vector<Money> deposits;
    std::vector<Money> withdrawls;

public:
    Money balance; 
    Account(int d, int c);

    Money getBalance();
    void setBalance(Money balance);

    void makeDeposit(int d, int c);
    void makeWithdrawls(int d, int c);

    std::string accountDetails();
    
    friend std::ostream& operator << (std::ostream &out, const Money &balance);

};

#endif