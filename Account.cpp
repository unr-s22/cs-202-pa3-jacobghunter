#include "Account.h"


Account::Account(Money m) {
    balance = m;
}

void Account::makeDeposit(Money m) {
    deposits.push_back(m);

    deposits_count++;

    update_balance = true;
}

void Account::makeWithdrawls(Money m) {
    withdrawls.push_back(m);

    withdrawls_count++;

    update_balance = true;
}

Money Account::getBalance() {
    //since i could not make this work in the << overload, I just did it here in a separate method - jacob
    if (update_balance == true) {
        balance = balance + std::accumulate(deposits.begin(), deposits.end(), balance) - std::accumulate(withdrawls.begin(), withdrawls.end(), balance);;
    }
    return balance;
}

std::ostream& operator << (std::ostream &out, const Account &acc ) {
    // not sure how to make the overload not const to update balance, this code would work if it wasnt constant, but because it is it will not allow changing of the passed account -jacob

    // if (acc.update_balance == true) {
        // Money m;
        // m = std::accumulate(acc.deposits.begin(), acc.deposits.end(), acc.balance) + std::accumulate(acc.withdrawls.begin(), acc.withdrawls.end(), acc.balance);
        // m = m + acc.balance;
        // acc.balance = m;
        // std::cout << acc.balance;
    // }


    out << "Account Details" << std::endl <<
    "--------------------------" << std::endl << "Current Balance:" << acc.balance + 
    std::accumulate(acc.deposits.begin(), acc.deposits.end(), acc.balance) - 
    std::accumulate(acc.withdrawls.begin(), acc.withdrawls.end(), acc.balance) <<
    "--------------------------" << std::endl <<
    "Number of Deposits: " << acc.deposits_count << std::endl <<
    "--------------------" << std::endl;
    for (int x = 0; x < acc.deposits.size(); x++) {
        out << "(" << x << ") " << acc.deposits.at(x);
    };

    out << "--------------------------" << std::endl <<
    "Number of Withdrawls: " << acc.withdrawls_count << std::endl <<
    "--------------------------" << std::endl;

    for (int x = 0; x < acc.withdrawls.size(); x++) {
        out << "(" << x << ") " << acc.withdrawls.at(x);
    };

    return out;
}