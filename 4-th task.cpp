//4. ������� ����� ������ � ������������ �����, ���������� ���������� ���� ����� �����.������������� ������ ��������, ���������, ��������� � ������� ������.
//�������� ���������, ��������������� ��� ����������� ������.

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