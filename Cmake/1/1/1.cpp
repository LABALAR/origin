#include<iostream>
#include<string>

int main() {
	std::string str;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите имя: ";
	std::cin >> str;
	std::cout << "Здравствуйте, " << str << std::endl;
}