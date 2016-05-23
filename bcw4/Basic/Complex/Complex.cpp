#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return this->real != other.real && this->imaginary != other.imaginary;
}

void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    this->real-= other.real;
    this->imaginary -= other.imaginary;
}
Complex Complex::operator+(const Complex& other) const {
    Complex temp;
    
    temp.real = this->real + other.real;
    temp.imaginary = this->imaginary + other.imaginary;
    
    return temp;
}

Complex Complex::operator-(const Complex& other) const {
    Complex temp;
    
    temp.real = this->real - other.real;
    temp.imaginary = this->imaginary - other.imaginary;
    
    return temp;
}

Complex Complex::operator*(const Complex& other) const {
    Complex temp;
    
    temp.real = this->real * other.real;
    temp.imaginary = this->imaginary * other.imaginary;
    
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << std::noshowpos << complex.getReal();
    if ( complex.getImaginary() != 0 ) {
        out  << std::showpos << complex.getImaginary() <<  "i" << std::noshowpos;
    }
        
    return out;
}
