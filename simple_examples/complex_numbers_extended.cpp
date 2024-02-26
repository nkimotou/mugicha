#include "complex_numbers_extended.h"

#include <iostream>
// Build upon the complex class from "complex_number_objects.cpp"
class Complex {
private:
    double real;
    double imaginary;
public:
    /*
     * Set up constructor member functions:
     * print, add, subtract, multiply, divide, and copy (using & to reference initialized members)
     */
    Complex(double realNum = 0, double imagNum = 0) : real(realNum), imaginary(imagNum) {}

    void print() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }

    Complex add(const Complex &complex) const {
        return Complex(real + complex.real, imaginary + complex.imaginary);
    }

    Complex subtract(const Complex &complex) const {
        return Complex(real - complex.real, imaginary - complex.imaginary);
    }

    Complex multiply(const Complex &complex) const {
        double result_real = real * complex.real - imaginary * complex.imaginary;
        double result_imaginary = real * complex.imaginary + imaginary * complex.real;
        return Complex(result_real, result_imaginary);
    }

    Complex divide(const Complex &complex) const {
        double denominator = complex.real * complex.real + complex.imaginary * complex.imaginary;
        double result_real = (real * complex.real + imaginary * complex.imaginary) / denominator;
        double result_imaginary = (imaginary * complex.real - real * complex.imaginary) / denominator;
        return Complex(result_real, result_imaginary);
    }

    Complex &copy(const Complex &complex) {
        real = complex.real;
        imaginary = complex.imaginary;
        return *this;
    }
    // Set up destructor for complex class objects
    ~Complex() {
        std::cout << "Destructor for this function: (" << real << " + " << imaginary << "i)" << std::endl;
    }
};

int main() {
    /*
     * Testing methods
     *
     */
    Complex c1(1.1, 2.2), c2, c3(3.3, 4.4), c4(5.5, 6.6);

    std::cout << "Complex number C1: ";
    c1.print();

    std::cout << "Copy Complex number C1: ";
    c2.copy(c1);
    c2.print();

    std::cout << "C1:" << std::endl;
    Complex result = c1.add(c1);
    result.print();
    result = c1.subtract(c1);
    result.print();
    result = c1.multiply(c1);
    result.print();
    result = c1.divide(c1);
    result.print();
    std::cout << std::endl;

    std::cout << "C2:" << std::endl;
    result = c3.add(c3);
    result.print();
    result = c3.subtract(c3);
    result.print();
    result = c3.multiply(c3);
    result.print();
    result = c3.divide(c3);
    result.print();
    std::cout << std::endl;

    std::cout << "C3:" << std::endl;
    result = c4.add(c4);
    result.print();
    result = c4.subtract(c4);
    result.print();
    result = c4.multiply(c4);
    result.print();
    result = c4.divide(c4);
    result.print();
    std::cout << std::endl;

    return 0;
}
