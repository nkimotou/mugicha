//
// Created by Nanami Kimoto on 10/21/23.
//

#include "variables.h"
#include <iostream>
int main() {
    /* Here we can declare variables and data types.
     * We can set up strings and concatenate them.
     */
    int num = 15;
    double nums = 15.5;
    char letters = 'n';
    bool greaterThan = (nums > num);
    std::string str = "C++";
    std::string t = "T";
    std::string rue = "rue";
    std::cout << "are nums greater than num?: " << greaterThan << std::endl;
    // The '+=' operator appends the second string onto the end of the first.
    t += rue;
    std::cout << t << std::endl;
    // Output will be '1' because greaterThan is a boolean. 1 = True, 0 = False.
    std::cout << "what char does variable 'letters' represent?: " << letters << std::endl;
    std::cout << "what is this primer about?: " << str << std::endl;
    return 0;
};
