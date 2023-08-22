#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
    if (str.size() == forbidden_length) throw std::exception("Вы ввели слово запретной длины! ");
    return str.size();
}

int main()
{
    int error_length;
    std::string str_in;

    //setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::cout << "Введите запретную длину: ";
    std::cin >> error_length;
    while (1) {
        std::cout << "Введите слово: ";
        std::cin >> str_in;
        try {
            std::cout << "Длина слова \"" << str_in << "\" равна " << function(str_in, error_length) << std::endl;;
        }
        catch (const std::exception& ex) {
            std::cout << ex.what();
            std::cout << "До свидания" << std::endl;
            return 0;
        }
    }
}