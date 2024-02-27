
#include "complex_overloaded_operators.h"

#include <iostream>
/*
 * Build onto complex class, adding overloaded operators:
 *
 */
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {} // Default constructor

    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {} // Constructor with parameters

    // Operator overloading for addition
    Complex operator+(const Complex &complex) const {
        return Complex(real + complex.real, imaginary + complex.imaginary);
    }

    // Operator overloading for subtraction
    Complex operator-(const Complex &complex) const {
        return Complex(real - complex.real, imaginary - complex.imaginary);
    }

    // Operator overloading for multiplication
    Complex operator*(const Complex &complex) const {
        double newReal = (real * complex.real) - (imaginary * complex.imaginary);
        double newImaginary = (real * complex.imaginary) + (imaginary * complex.real);
        return Complex(newReal, newImaginary);
    }

    // Operator overloading for division
    Complex operator/(const Complex &complex) const {
        double denominator = (complex.real * complex.real) + (complex.imaginary * complex.imaginary);
        double newReal = ((real * complex.real) + (imaginary * complex.imaginary)) / denominator;
        double newImaginary = ((imaginary * complex.real) - (real * complex.imaginary)) / denominator;
        return Complex(newReal, newImaginary);
    }

    // Operator overloading for equality comparison
    bool operator==(const Complex &complex) const {
        return (real == complex.real && imaginary == complex.imaginary);
    }

    // Operator overloading for inequality comparison
    bool operator!=(const Complex &complex) const {
        return !(*this == complex);
    }

    // Overloaded stream insertion operator (output)
    friend std::ostream &operator<<(std::ostream &output, const Complex &complex) {
        output << "(" << complex.real << " + " << complex.imaginary << "i)";
        return output;
    }

    // Overloaded stream extraction operator (input)
    friend std::istream &operator>>(std::istream &input, Complex &complex) {
        input >> complex.real >> complex.imaginary;
        return input;
    }
};

int main() {
    Complex c1, c2;

    std::cout << "Enter a Complex number in the form 'a+bi': ";
    std::cin >> c1;
    std::cout << "Enter another Complex number in the form 'a+bi': ";
    std::cin >> c2;
    std::cout << std::endl;

    // Perform operations
    std::cout << "Addition: " << c1 + c2 << std::endl;
    std::cout << "Subtraction: " << c1 - c2 << std::endl;
    std::cout << "Multiplication: " << c1 * c2 << std::endl;
    std::cout << "Division: " << c1 / c2 << std::endl;

    // Perform equality and inequality comparisons
    std::cout << "Equivalent (==) operator: " << std::boolalpha << (c1 == c2) << std::endl;
    std::cout << "Does not equal (!=) operator: " << std::boolalpha << (c1 != c2) << std::endl;

    return 0;
}
