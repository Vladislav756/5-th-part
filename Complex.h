#pragma once

class Complex
{
public:

	Complex() {}
	Complex(double real);
	Complex(double real, double imaginary);
	Complex(const Complex& other);

	~Complex() {}

	void ComlexPrint();

	Complex operator =(const Complex& other);
	Complex operator +(const Complex& other);
	Complex operator -(const Complex& other);
	Complex operator *(const Complex& other);

private:
	double Real = 0.0;
	double Imaginary = 0.0;

};