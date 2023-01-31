
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

struct location
{
	string country;
	string street;
	string  city;
	int house;
	int apartament;
	int index;



};

void print_loc(location new_loc)
{
	cout << "Страна: " << new_loc.country << endl;
	cout << "Город: " << new_loc.city << endl;
	cout << "Улица: " << new_loc.street << endl;
	cout << "Дом: " << new_loc.house << endl;
	cout << "Квартира: " << new_loc.apartament << endl;
	cout << "Индекс: " << new_loc.index << endl;
	cout << endl;
}


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	location loc1, loc2;
	loc1.country = "Россия";
	loc1.city = "Москва";
	loc1.street = "Пупкина";
	loc1.house = 1;
	loc1.apartament = 22;
	loc1.index = 55587;

	loc2.country = "ЮАР";
	loc2.city = "Кейптаун";
	loc2.street = "Обычная";
	loc2.house = 44;
	loc2.apartament = 32;
	loc2.index = 33269;

	print_loc(loc1);
	print_loc(loc2);
	return 0;
}

