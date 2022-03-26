#include "Money.h"
// #include "Account.h"

int main() {

    //for once Account is done, make sure methods are named the same

    //Accout acc(300, 23);
    //std::cout << acc;
    //acc.makeDeposit(200);
    //acc.makeDeposit(300, 24);
    //acc.makeDeposit(501, 22);
    //std::cout << acc;
    //makeWithdrawls(300, 10);
    //makeWithdrawls(201, 34);
    //std::cout << acc;
    

    //I didnt check for if the condition is false so there arent 8 billion prints, but in my code you can see i test for if its true and if its not i return false -Jacob

    Money money1(1, 1);
    Money money2(1, 1);
    
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 >= money2) {
        std::cout << "money1 is greater or equal to money2" << std::endl;
    } else {
        std::cout << "money1 is not greater or equal to money2" << std::endl;
    }
    std::cout << std::endl;

    money1.setMoney(2, 0);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 > money2) {
        std::cout << "money1 is greater than money2" << std::endl;
    } else {
        std::cout << "money1 is not greater than money2" << std::endl;
    }
    std::cout << std::endl;

    money2.setMoney(2, 0);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 <= money2) {
        std::cout << "money1 is lesser or equal to money2" << std::endl;
    } else {
        std::cout << "money1 is not lesser than money2" << std::endl;
    }
    std::cout << std::endl;

    money2.setMoney(3, 0);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 < money2) {
        std::cout << "money2 is greater than money1" << std::endl;
    } else {
        std::cout << "money2 is not greater than money1" << std::endl;
    }
    std::cout << std::endl;

    money1.setMoney(3, 0);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 == money2) {
        std::cout << "money1 is equal to money2" << std::endl;
    } else {
        std::cout << "mone1 is not equal to money2" << std::endl;
    }
    std::cout << std::endl;

    money1.setMoney(4, 0);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;
    if (money1 != money2) {
        std::cout << "money1 is not equal to money2" << std::endl;
    } else {
        std::cout << "money1 is not not equal to money2" << std::endl;
    }
    std::cout << std::endl;

    money1.setMoney(2, 99);
    money2.setMoney(4, 3);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;

    std::cout << "money1 + money2 = " << money1 + money2 << std::endl;

    std::cout << std::endl;

    money1.setMoney(5, 1);
    money2.setMoney(4, 99);
    std::cout << "value of money1 = " << money1;
    std::cout << "value of money2 = " << money2;

    std::cout << "money1 - money2 = " << money1 - money2 << std::endl;
    
    std::cout << std::endl;


    
    return 0;
}