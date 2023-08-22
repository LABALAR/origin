#include "math.h"
#include <iostream>
using namespace std;

int math()
{
	int a,b,c,res = 0;
	string name_operation;

	cout << "Введите первое число: " << endl;
	cin >> a;
	cout << "Введите второе  число: " << endl;
	cin >> b;

	
		
			while(true)
			{
				cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : " << endl;
				cin >> c;

				switch (c)
				{
				case 1:
					name_operation = " плюс ";
					cout << a << name_operation << b << " = " << a + b << endl;
					break;

				case 2:
					name_operation = " минус ";
					cout << a << name_operation << b << " = " << a - b << endl;
					break;

				case 3:
					name_operation = " умножить ";
					cout << a << name_operation << b << " = " << a * b << endl;
					break;

				case 4:
					name_operation = " разделить на ";
					cout << a << name_operation << b << " = " << static_cast<double> (a) / b << endl;
					break;

				case 5:
					name_operation = " в степени ";
					    res = a;
						for (int i = 1; i < b; ++i)
						{
							res *= a;
						}
					cout << a << name_operation << b << " = " << res << endl;
					break;

				default:
					cout << "Error! Wrong value." << endl;
					continue;
			
			    }
			break;
			}


	return 1;
}
