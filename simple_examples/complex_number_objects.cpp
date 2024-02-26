#include "complex_number_objects.h"
#include <iostream>
#include <cmath>

/*
*Create a class named Complex to represent complex numbers.
*Use the main() function and create at least three complex number objects and test all member functions of the Complex class.
*/

using namespace std;

// Set up class "Complex" for methods
class Complex{

public:
    // Constructor "Complex" for initializing real and imaginary numbers
    Complex(){
        real = 0;
        imaginary = 0;
    }
    // Print method for printing out (a+bi) formatted numbers
    void print(){
        cout<<real<< " + " <<imaginary<<"i";
    }
    // Set method for Double datatype
    void set(double realNums, double imagNums){
        real = realNums;
        imaginary = imagNums;
    }
    // Set up method to get real numbers
    double getReal(double realNum){
        real = realNum;
        cout<<realNum;
    }
    // Set up method to get imaginary numbers
    double getImaginary(double imagNum){
        imaginary = imagNum;
        cout<<imagNum;
    }

// Set private double constants
private:

    double real;
    double imaginary;

};

// Test complex numbers output
int main(){

    Complex c1;
    cout<<"Complex number C1 is: ";
    c1.print();
    cout<<endl;
    //set method
    cout<<"Complex number C2 is: ";
    c1.set(3.3, 4.4);
    c1.print();
    cout<<endl;
    //get method
    Complex c2;
    cout<<"Complex number C3's real part is: ";
    c2.getReal(5.5);
    cout<<endl;

    cout<<"Complex number C3's imaginary part is: ";
    c2.getImaginary(6.6);
    cout<<endl;

    return 0;

}