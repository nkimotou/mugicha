/*
// Created by Nanami Kimoto on 10/19/23.
*/

// '.h' or 'header files' contain functions, classes, variables, and other declarations.
#include "basics.h"
#include <iostream>

int main() {
    /* 'main' is where program execution begins.
     * 'std' means 'standard template library' and it's a collection of general purpose classes and functions for C++.
     * In this case, we use iostream to print to the console.
     * We do this by 'including' the part of the library we want to use at the top. Just as you'd import a library in other languages.
     * 'cout' is from the iostream class. It means 'character output'
     * '<<' is called a 'stream operator' and it is used to insert text or data into 'character output'
     * 'endl' means 'end of the line' and marks a new line.
     * 'return 0;' is used to mark the exit status. It returns a value to the operating system.
     * In this case, '0' indicated a successful execution.
     */
    std::cout << "this is how you print to the console" << std::endl;
    // Technically you can omit the return, but good practice is to include it.
    return 0;
}
