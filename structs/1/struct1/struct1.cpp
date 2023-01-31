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
            if (static_cast<int>(month) == 0)
            {
                cout << "До свидания!" << endl;
                break;
            }
        switch (static_cast<int>(month))
        {
        case 1:
            cout << "январь" << endl;
            break;
        case 2:
            cout << "февраль" << endl;
            break;
        case 3:
            cout << "март" << endl;
            break;
        case 4:
            cout << "апрель" << endl;
            break;
        case 5:
            cout << "май" << endl;
            break;
        case 6:
            cout << "июнь" << endl;
            break;
        case 7:
            cout << "июль" << endl;
            break;
        case 8:
            cout << "август" << endl;
            break;
        case 9:
            cout << "сентябрь" << endl;
            break;
        case 10:
            cout << "октябрь" << endl;
            break;
        case 11:
            cout << "ноябрь" << endl;
            break;
        case 12:
            cout << "декабрь" << endl;
            break;
        default:
            cout << "Неправильный номер!" << endl;
            break;
        }
        
    }


    return 0;
}

