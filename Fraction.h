#pragma once
#include <iostream>

class Fraction
{
public:
	Fraction(int Numerator, int Determinator);
	Fraction(const Fraction& other);

	void FractionPrint();

	Fraction operator =(const Fraction& other);
	Fraction operator +(const Fraction& other);
	Fraction operator -(const Fraction& other);
	Fraction operator *(const Fraction& other);
	Fraction operator /(const Fraction& other);
	//double rational_number();

private:

	int Numerator = 0;
	int Determinator = 1;
};
