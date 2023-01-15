
///1. Создайте класс Complex, добавьте метод сложения, вычитания и произведения комплексных чисел. Написать программу, демонстрирующую все возможности класса.

#include <iostream>
#include "Complex.h"

int main()
{
    std::cout << "This program can sum, subtract and multiply complex values \n";
    
    bool again = true;

    while (again == true)
    {
        std::cout << "Incert two numbers, real and imaginary for first number, than real and imaginary for second number \n";

        double Real1 = 0;

        double Imaginary1 = 0;

        double Real2 = 0;

        double Imaginary2;

        std::cin >> Real1 >> Imaginary1 >> Real2 >> Imaginary2;
        
        Complex a = Complex (Real1, Imaginary1);

        Complex b = Complex(Real2, Imaginary2);

        Complex c = Complex(0, 0);

        c = a + b;
    
        std::cout << "Sum of complex numbers = ";

        c.ComlexPrint();

        std::cout << "Substract of complex numbers = ";

        c = a - b;

        c.ComlexPrint();

        std::cout << "Multiply of complex numbers = ";

        c = a * b;
        
        c.ComlexPrint();

        std::cout << "Try again? \n 1 - yes \n 0 - no \n";

        std::cin >> again;

    }
    
    return 0;
}
