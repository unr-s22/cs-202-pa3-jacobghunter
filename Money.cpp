
#include "Money.h"
#include <iostream>
#include <string>

Money::Money(int d, int c) {
    dollars = d;
    cents = c;
}

Money::Money() {
    dollars = 0;
    cents = 0;
}

void Money::setMoney(int d, int c) {
    dollars = d;
    cents = c;
}

std::ostream& operator << (std::ostream &out, const Money &m) {
    //adding leading zeros if necessary
    std::string leadingZero = "";
    if (std::to_string(m.cents).length() == 1) {
        leadingZero = "0";
    }
    out << "$" << std::stof(std::to_string(m.dollars) + "." + leadingZero + std::to_string(m.cents)) << std::endl;
    return out;
}

Money operator + (const Money &m1, const Money &m2) {
    Money money;
    money.dollars = m1.dollars + m2.dollars;
    money.cents = m1.cents + m2.cents;

    if (std::to_string(money.cents).length() > 2) {
        money.dollars += 1;
        money.cents -= 100;
    }
    return money;
}

Money operator - (const Money &m1, const Money &m2) {
    Money money;
    money.dollars = m1.dollars - m2.dollars;
    money.cents = m1.cents - m2.cents;
    if (m1.cents < m2.cents) {
        money.dollars -= 1;
        money.cents += 100;
    }
    
    return money;
}

bool operator < (const Money &m1, const Money &m2) {
    if (m1.dollars < m2.dollars) {
        return true;
    } else if (m1.dollars == m2.dollars) {
        if (m1.cents < m2.cents) {
            return true;
        }
    }
    return false;
}

bool operator > (const Money &m1, const Money &m2) {
    if (m1.dollars > m2.dollars) {
        return true;
    } else if (m1.dollars == m2.dollars) {
        if (m1.cents > m2.cents) {
            return true;
        }
    }
    return false;
}

bool operator >= (const Money &m1, const Money &m2) {
    if (m1 > m2 || m1 == m2) {
        return true;
    }
    return false;
}

bool operator <= (const Money &m1, const Money &m2) {
    if (m1 < m2 || m1 == m2) {
        return true;
    }
    return false;
}

bool operator == (const Money &m1, const Money &m2) {
    if (m1.dollars == m2.dollars && m1.cents == m2.cents) {
        return true;
    }
    return false;
}

bool operator != (const Money &m1, const Money &m2) {
    if (m1.dollars == m2.dollars && m1.cents == m2.cents) {
        return false;
    }
    return true;
}