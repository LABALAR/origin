#include <iostream>
#include <windows.h>
using namespace std;

class calculator
{
public:
	double num1 = 0, num2 = 0;

	double add(double num1, double num2)
	{
		return (num1 + num2);
	}

	double multiply(double num1, double num2)
	{
		return (num1 * num2);
	}
	double  subtract_1_2(double num1, double num2)
	{
		return (num1 - num2);
	}
	double subtract_2_1(double num1, double num2)
	{
		return (num2 - num1);
	}
	double divide_1_2(double num1, double num2)
	{
		return(num1 / num2);
	}
	double divide_2_1(double num1, double num2)
	{
		return(num2 / num1);
	}
	bool set_num1(double num1)
	{
			if (num1 != 0)
			{
				this->num1 = num1;
				return(true);
			}
			else
			{
				return (false);
			}

	}
	bool set_num2(double num2)
	{
			if (num2 !=0)
			{
				this->num2 = num2;
				return(true);
			}
			else
			{
				return (false);
			}
	}


};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	calculator calc;
	while (1)
	{
		do
		{
			cout << "Введите первое число :";
			cin >> calc.num1;
			calc.set_num1(calc.num1);
			
				if (calc.num1 == 0)
				{
					cout << "Неверный ввод!" << endl;
				}
		} while(calc.num1 == 0);
			do
			{
				cout << "Введите второе число :";
				cin >> calc.num2;
				calc.set_num2(calc.num2);
					if (calc.num2 == 0)
					{
						cout << "Неверный ввод!" << endl;
					}
			} while (calc.num2 == 0);

			cout << "num1 + num2 = " << calc.add(calc.num1, calc.num2) << endl;
			cout << "num1 * num2 = " << calc.multiply(calc.num1, calc.num2) << endl;
			cout << "num1/num2 = " << calc.divide_1_2(calc.num1, calc.num2) << endl;
			cout << "num2/num1 = " << calc.divide_2_1(calc.num1, calc.num2) << endl;
			cout << "num1 - num2 = " << calc.subtract_1_2(calc.num1, calc.num2) << endl;
			cout << "num2 - num1 = " << calc.subtract_2_1(calc.num1, calc.num2) << endl;

	}



	return 0;
}