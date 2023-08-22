#include <iostream>
#include <string>
#include "Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Leaver lvr;
    std::string s;
    std::cout << "Введите имя: ";
    std::cin >> s;
    std::cout << lvr.leave(s) << std::endl;
}