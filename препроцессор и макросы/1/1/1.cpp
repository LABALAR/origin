
#include <iostream>
#include <windows.h>
#define MODE 1

using namespace std;
#if (1 == MODE)
int add(int a, int b)
{
	return a + b;
}
#endif

int main()
{
#ifndef MODE
#error констатнта MODE не определена
#endif // !MODE

	
	setlocale(LC_ALL, "Russian");

#if (0 == MODE)
	cout << "Работаю в режиме тренировки" << endl;
#elif (1 == MODE)
	cout << "Работаю в боевом режиме" << endl;
	int n1;
	int n2;
	cout << "Введите число 1: ";
	cin >> n1;
	cout << "Введите число 2: ";
	cin >> n2;
	cout << "Результат сложения: " << add(n1, n2) << endl;
#elif cout << "Неизвестный режим. Завершение работы" << endl;
#endif

	return 0;
}