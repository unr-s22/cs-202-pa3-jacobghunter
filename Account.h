#ifndef CODE_ACCCOUNT_H
#define CODE_ACCCOUNT_H

#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>
#include <functional>
#include "Money.h"

class Account : public Money {
    bool update_balance = false;
    int deposits_count = 0;
    int withdrawls_count = 0;
    
    std::vector<Money> deposits;
    std::vector<Money> withdrawls;

public:
    Money balance; 
    Account(Money);

    Money getBalance();
    void makeDeposit(Money);
    void makeWithdrawls(Money);
    
    friend std::ostream& operator << (std::ostream &out, const Account &acc);

};

#endif