#include "math.h"
#include <iostream>
using namespace std;

int math()
{
	int a,b,c,res = 0;
	string name_operation;

	cout << "������� ������ �����: " << endl;
	cin >> a;
	cout << "������� ������  �����: " << endl;
	cin >> b;

	
		
			while(true)
			{
				cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������) : " << endl;
				cin >> c;

				switch (c)
				{
				case 1:
					name_operation = " ���� ";
					cout << a << name_operation << b << " = " << a + b << endl;
					break;

				case 2:
					name_operation = " ����� ";
					cout << a << name_operation << b << " = " << a - b << endl;
					break;

				case 3:
					name_operation = " �������� ";
					cout << a << name_operation << b << " = " << a * b << endl;
					break;

				case 4:
					name_operation = " ��������� �� ";
					cout << a << name_operation << b << " = " << static_cast<double> (a) / b << endl;
					break;

				case 5:
					name_operation = " � ������� ";
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
