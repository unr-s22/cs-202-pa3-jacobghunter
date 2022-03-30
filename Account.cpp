#include "Account.h"

Account::Account(int d, int c) : Money(d, c){
    balance = Money(d,c);

    //test
    std::cout << "Initial Balance: " << balance;
}

void Account::makeDeposit(int d, int c){
    deposits.push_back(Money(d, c));

    //test
    std::cout << "Current Deposit: " << deposits.at(deposits_count);
    deposits_count++;

    update_balance = true;


    if(update_balance = true){
        balance = balance + Money(d,c);
        update_balance = false;
    }
    

    //test
    std::cout << "Balance: " << balance << std::endl;
}

void Account::makeWithdrawls(int d, int c){
    withdrawls.push_back(Money(d, c));

    //test
    std::cout << "Current Withdrawl: " << withdrawls.at(withdrawls_count);
    withdrawls_count++;

    update_balance = true;

    if(update_balance = true){
        balance = balance - Money(d,c);
        update_balance = false;
    }
    

    //test
    std::cout << "Balance: " << balance << std::endl;
}




std::ostream& operator << (std::ostream &out, const Money &acc) {
    
    //out << ss; 

    return out;
}