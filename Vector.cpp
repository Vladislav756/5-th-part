#include "Vector.h"
#include <cmath>
#include <iostream>

Vector::Vector(double x, double y, double z)
{
	X = x;
	Y = y;
	Z = z;
}

Vector::Vector(const Vector& other)
{
	X = other.X;
	Y = other.Y;
	Z = other.Z;
}

void Vector::Print()
{
	std::cout << "X is " << X << " Y is " << Y << "Z is " << Z << "\n";
}

Vector Vector::operator=(const Vector& other)
{
	X = other.X;
	Y = other.Y;
	Z = other.Z;

	return Vector(X, Y, Z);
}

Vector Vector::operator+(const Vector& other)
{
	Vector temp;

	temp.X = X + other.X;

	temp.Y = Y + other.Y;

	temp.Z = Z + other.Z;

	return temp;
}

Vector Vector::operator-(const Vector& other)
{
	Vector temp;

	temp.X = X - other.X;

	temp.Y = Y - other.Y;

	temp.Z = Z - other.Z;

	return temp;
}

void Vector::Normilize()
{
	double length = Length();

	X = X / length;
	Y = Y / length;
	Z = Z / length;
}


double Vector::Length()
{
	return abs(sqrt(pow(X, 2.0) + pow(Y, 2.0) + pow(Z, 2.0)));
}
