//
// Created by Nanami Kimoto on 10/21/23.
//

#include "variables.h"
#include <iostream>
int main() {
    int num = 15;
    double nums = 15.5;
    char letters = 'n';
    bool greaterThan = (nums > num);
    std::cout << "let's return some data. nums > num?: " << greaterThan << std::endl;
    // output will be '1' because greaterThan is a boolean. 1 = True, 0 = False.
    std::cout << "what char does variable 'letters' represent?: " << letters << std::endl;
    return 0;
};
