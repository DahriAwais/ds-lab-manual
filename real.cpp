#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Function to set the real and imaginary parts of a complex number
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    // Function to display a complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to multiply two complex numbers
    Complex multiply(const Complex& other) const {
        float r = (real * other.real) - (imag * other.imag);
        float i = (real * other.imag) + (imag * other.real);
        return Complex(r, i);
    }
};

int main() {
    float r1, i1, r2, i2;

    // Taking input for the first complex number
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;

    // Taking input for the second complex number
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;

    // Creating two complex number objects
    Complex c1(r1, i1), c2(r2, i2);

    // Performing operations
    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);
    Complex prod = c1.multiply(c2);

    // Displaying the results
    cout << "\nSum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    cout << "Product: ";
    prod.display();

    return 0;
}
