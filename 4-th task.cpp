//4. Создать класс дробей – рациональных чисел, являющихся отношением двух целых чисел.Предусмотреть методы сложения, вычитания, умножения и деления дробей.
//Написать программу, демонстрирующую все возможности класса.

#include <iostream>
#include <cmath>
#include "Fraction.h"


int main()
{
	Fraction fraction1 (1, 2);
	Fraction fraction2(3, 4);
	Fraction fraction3(1, 1);

	fraction3 = fraction1 + fraction2;

	fraction3.FractionPrint();

	fraction3 = fraction1 - fraction2;

	fraction3.FractionPrint();

	fraction3 = fraction1 * fraction2;

	fraction3.FractionPrint();

	fraction3 = fraction1 / fraction2;

	fraction3.FractionPrint();


	
return 0;
}