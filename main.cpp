#include "Money.h"
// #include "Account.h"

int main() {
    Money m(4, 1);
    Money monays(3, 2);
    
    if (m > monays) {
        std::cout << "larger" << std::endl;
    } else {
        std::cout << "smaller" << std::endl;
    }

    
    
    return 0;
}