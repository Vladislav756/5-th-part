
//2. Создайте класс вектор, реализуйте методы сложения, вычитания, нормализации и получения длины вектора.Написать программу, демонстрирующую все возможности класса.

#include <iostream>
#include <cmath>
#include "Vector.h"

int main()
{
    Vector vector1 (30.0, 40.0, 20.0);
    Vector vector2 (15.0, 20.0, 60.0);
    Vector vector3 (0, 0, 0);

    vector3 = vector1 + vector2;

    vector3.Print();

    vector3 = vector1 - vector2;

    vector3.Print();

    vector3.Normilize();

    vector3.Print();

    vector3.Length();

    vector3.Print();

    return 0;
}