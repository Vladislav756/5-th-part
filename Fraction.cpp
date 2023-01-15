#include "Fraction.h"
#include <iostream>



Fraction::Fraction( int numerator, int determinator)
{
	Numerator = numerator;
	Determinator = determinator;
}

Fraction::Fraction(const Fraction& other)
{
	Numerator = other.Numerator;
	Determinator = other.Determinator;
}

void Fraction::FractionPrint()
{
	std::cout << " Numerator is " << Numerator << " Determinator is " << Determinator << " Fraction is " << Numerator << "/" << Determinator << "\n"; //<< "Rational Number is " << rational_number;
}

Fraction Fraction::operator=(const Fraction& other)
{
	Numerator = other.Numerator;
	Determinator = other.Determinator;

	return Fraction(Numerator,Determinator);
}

Fraction Fraction::operator+(const Fraction& other)
{
	Fraction temp;

	int denominator = 0;

	
	
	if (Determinator > other.Determinator)
	{
		temp.Determinator = Determinator;

		denominator = Determinator / other.Determinator;

		temp.Numerator = Numerator + (other.Numerator * denominator);
	}
	else
	{
		temp.Determinator = other.Determinator;

		denominator = other.Determinator / Determinator;

		temp.Numerator = other.Numerator + (Numerator * denominator);
	}

	return temp;
}

Fraction Fraction::operator-(const Fraction& other)
{
	Fraction temp;

	int denominator = 0;



	if (Determinator > other.Determinator)
	{
		temp.Determinator = Determinator;

		denominator = Determinator / other.Determinator;

		temp.Numerator = Numerator - (other.Numerator * denominator);
	}
	else
	{
		temp.Determinator = other.Determinator;

		denominator = other.Determinator / Determinator;

		temp.Numerator = other.Numerator - (Numerator * denominator);
	}
	return temp;
}

Fraction Fraction::operator*(const Fraction& other)
{
	Fraction temp;

	temp.Numerator = Numerator * other.Numerator;
	temp.Determinator = Determinator * other.Determinator;

	return temp;
}

Fraction Fraction::operator/(const Fraction& other)
{
	Fraction temp;

	temp.Numerator = Numerator * other.Determinator;
	temp.Determinator = Determinator * other.Numerator;

	return temp;
}