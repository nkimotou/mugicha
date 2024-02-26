#include <iostream>
#include <cmath>

/*
 * Set up methods for complex number objects.
 * Set up test in main method.
 */

class Complex {
public:
    // Member initialization list
    Complex() : real(0), imaginary(0) {}
    // Constructor setup with parameters
    Complex(double realNums, double imagNums) : real(realNums), imaginary(imagNums) {}
    // Marking print() as const since it doesn't modify object state
    void print() const {
        std::cout << real << " + " << imaginary << "i";
    }

    // Get numbers
    double getReal() const { return real; }
    double getImaginary() const { return imaginary; }

    // Set numbers
    void set(double realNums, double imagNums) {
        real = realNums;
        imaginary = imagNums;
    }

private:
    double real;
    double imaginary;
};

int main() {
    // Initialize c1 with default constructor
    Complex c1;
    std::cout << "Complex number C1 is: ";
    c1.print();
    std::cout << std::endl;
    // Initialize c2 with parameterized constructor
    Complex c2(3.3, 4.4);
    std::cout << "Complex number C2 is: ";
    c2.print();
    std::cout << std::endl;

    // Accessing and printing real and imaginary parts directly
    std::cout << "Complex number C3's real part is: " << c2.getReal() << std::endl;
    std::cout << "Complex number C3's imaginary part is: " << c2.getImaginary() << std::endl;

    return 0;
}