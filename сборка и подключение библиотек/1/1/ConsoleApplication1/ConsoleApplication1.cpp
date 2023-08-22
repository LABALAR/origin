#include <iostream>
#include <string>
#include "Greeter.h"

int main()
{
    system("chcp 1251");
    Greeter gr;
    std::string s;
    std::cout << "Введите имя: ";
    std::cin >> s;
    std::cout << gr.greet(s) << std::endl;

}