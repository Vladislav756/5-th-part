#include "Complex.h"
#include <iostream>

Complex::Complex(double real)
{
	Real = real;
}

Complex::Complex(double real, double imaginary)
{
	Real = real;
	Imaginary = imaginary;
}

Complex::Complex(const Complex& other)
{
	Real = other.Real;  
	Imaginary = other.Imaginary;
}

void Complex::ComlexPrint()
{
	std::cout << "Real is " << Real << " Imaginary is  " << Imaginary << "\n";
}

Complex Complex::operator=(const Complex& other)
{
	Real = other.Real;  
	Imaginary = other.Imaginary;
	
	return Complex(Real, Imaginary);
}

Complex Complex::operator+(const Complex& other)
{
	Complex temp;

	temp.Real = Real + other.Real;
	temp.Imaginary = Imaginary + other.Imaginary;

	return temp;
}

Complex Complex::operator-(const Complex& other)
{
	Complex temp;

	temp.Real = Real - other.Real;
	temp.Imaginary = Imaginary - other.Imaginary;

	return temp;
}

Complex Complex::operator*(const Complex& other)
{
	Complex temp;

	temp.Real = (Real * other.Real) + (Real * other.Imaginary);
	temp.Imaginary = Imaginary * other.Real;

	return temp;
}
