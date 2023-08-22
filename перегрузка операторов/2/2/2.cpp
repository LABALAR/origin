
#include <iostream>
#include "Fraction.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	int n1, n2, d1, d2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> n1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> d1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> n2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> d2;

	Fraction f1(n1, d1);
	Fraction f2(n2, d2);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << ++f1 * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout << f1 << "-- * " << f2 << " = ";
	std::cout << f1-- * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;

	std::cout << std::endl;
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << "++f1 = " << ++f1 << std::endl;
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << "f1-- = " << f1-- << std::endl;
	std::cout << "f1 = " << f1 << std::endl;
	std::cout << std::endl;

	Fraction f3(1, 10);
	Fraction f4(2, 10);
	Fraction f5(3, 10);
	double dd1 = 0.1;
	double dd2 = 0.2;
	double dd3 = 0.3;
	if (dd1 + dd2 == dd3)
		std::cout << dd1 << " + " << dd2 << " == " << dd3 << std::endl;
	else
		std::cout << dd1 << " + " << dd2 << " != " << dd3 << std::endl;
	if (f3 + f4 == f5)
		std::cout << f3 << " + " << f4 << " == " << f5 << std::endl;
	else
		std::cout << f3 << " + " << f4 << " != " << f5 << std::endl;
	return 0;
}