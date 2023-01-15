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
	std::cout << " Numerator is " << Numerator << " Determinator is " << Determinator << " Fraction is " << Numerator << "/" << Determinator << "\n";
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

	if (Determinator == other.Determinator)
	{
		temp.Numerator = Numerator + other.Numerator;

		denominator = Determinator;
	}
	else
	{
		temp.Determinator = Determinator * other.Determinator;

		temp.Numerator = (Numerator * other.Determinator) + (other.Numerator * Determinator);
	}

	return temp;
}

Fraction Fraction::operator-(const Fraction& other)
{
	Fraction temp;

	int denominator = 0;

	if (Determinator == other.Determinator)
	{
		temp.Numerator = Numerator - other.Numerator;

		denominator = Determinator;
	}
	else
	{
		temp.Determinator = Determinator * other.Determinator;

		temp.Numerator = (Numerator * other.Determinator) - (other.Numerator * Determinator);
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
