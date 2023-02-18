#include <iostream>
#include <windows.h>
using namespace std;
enum class months
{
    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int number = 0;

    while (1)
    {
        cout << "Введите номер месяца : ";
        cin >> number;
        months month = static_cast<months> (number);
            if (number == 0)
            {
                cout << "До свидания!" << endl;
                break;
            }
        switch (month)
        {
        case months::январь:
            cout << "январь" << endl;
            break;
        case months::февраль:
            cout << "февраль" << endl;
            break;
        case months::март:
            cout << "март" << endl;
            break;
        case months::апрель:
            cout << "апрель" << endl;
            break;
        case months::май:
            cout << "май" << endl;
            break;
        case months::июнь:
            cout << "июнь" << endl;
            break;
        case months::июль:
            cout << "июль" << endl;
            break;
        case months::август:
            cout << "август" << endl;
            break;
        case months::сентябрь:
            cout << "сентябрь" << endl;
            break;
        case months::октябрь:
            cout << "октябрь" << endl;
            break;
        case months::ноябрь:
            cout << "ноябрь" << endl;
            break;
        case months::декабрь:
            cout << "декабрь" << endl;
            break;
        default:
            cout << "Неправильный номер!" << endl;
            break;
        }
        
    }


    return 0;
}

