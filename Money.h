
#ifndef CODE_MONEY_H
#define CODE_MONEY_H

#include <iostream>

class Money {
private:
    int dollars;
    int cents;
public:
    Money(int d, int c);
    Money();
    void setMoney(int d, int c);

    friend bool operator < (const Money &m1, const Money &m2);
    friend bool operator > (const Money &m1, const Money &m2);
    friend bool operator >= (const Money &m1, const Money &m2);
    friend bool operator <= (const Money &m1, const Money &m2);
    friend bool operator == (const Money &m1, const Money &m2);
    friend bool operator != (const Money &m1, const Money &m2);

    friend Money operator + (const Money &m1, const Money &m2);
    friend Money operator - (const Money &m1, const Money &m2);

    friend std::ostream& operator << (std::ostream &out, const Money &m);
};

#endif