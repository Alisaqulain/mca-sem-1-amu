//week 10 program 1
#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex readComplex() {
    Complex c;
    cout << "Enter real and imaginary parts: ";
    cin >> c.real >> c.imag;
    return c;
}

void writeComplex(Complex c) {
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
    cout << endl;
}

Complex add(Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

Complex subtract(Complex a, Complex b) {
    Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

Complex multiply(Complex a, Complex b) {
    Complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main() {
    Complex c1, c2;

    cout << "First complex number:\n";
    c1 = readComplex();

    cout << "Second complex number:\n";
    c2 = readComplex();

    cout << "First number: ";
    writeComplex(c1);

    cout << "Second number: ";
    writeComplex(c2);

    cout << "Addition: ";
    writeComplex(add(c1, c2));

    cout << "Subtraction: ";
    writeComplex(subtract(c1, c2));

    cout << "Multiplication: ";
    writeComplex(multiply(c1, c2));

    return 0;
}
