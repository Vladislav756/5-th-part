#pragma once

class Vector
{
public:

	Vector(){}
	Vector(double X);
	//Vector(double X, double Y);
	Vector(double X, double Y, double Z);
	Vector(const Vector& other);

	~Vector() {}

	void Print();

	Vector operator=(const Vector& other);
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	void Normilize();
	double Length();

private:

	double X = 0;
	double Y = 0;
	double Z = 0;
};

