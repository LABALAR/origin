#include <iostream>
//#include <windows.h> 
using namespace std;


class calculator
{
private:
    double num1 = 0, num2 = 0;

public:

    double add()
    {
        return (num1 + num2);
    }

    double multiply()
    {
        return (num1 * num2);
    }

    double subtract_1_2()
    {
        return (num1 - num2);
    }

    double subtract_2_1()
    {
        return (num2 - num1);
    }

    double divide_1_2()
    {
        return (num1 / num2);
    }

    double divide_2_1()
    {
        return (num2 / num1);
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return (true);
        }
        else
        {
            return (false);
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return (true);
        }
        else
        {
            return (false);
        }
    }

};


int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    //setlocale(LC_ALL, "Russian");
    double num;
    calculator calc;

    while (1)
    {
        do
        {
            cout << "Vvedite 1 chislo: ";
            cin >> num;
            calc.set_num1(num);
            if (calc.set_num1(num) == false)
            {
                cout << "Error!" << endl;
            }

        } while (num == 0);


        do
        {
            cout << "Vvedite 2 chislo: ";
            cin >> num;
            calc.set_num2(num);
            if (calc.set_num2(num) == false)
            {
                cout << "Error!" << endl;
            }

        } while (num == 0);

        cout << "num1 + num2 = " << calc.add() << endl;
        cout << "num1 * num2 = " << calc.multiply() << endl;
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;

    }

    return 0;
}
