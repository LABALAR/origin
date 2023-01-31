// struct2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
struct person
{
    int  number;
    string name;
    double balance;
};

void change_balance(person* new_info, double new_balance)
{
    double new_bal = 0;
    cout << "Введите номер счета: ";
    cin >> new_info->number;
    cout << endl;
    cout << "Введите имя владельца: ";
    cin >> new_info->name;
    cout << endl;
    cout << "Введите баланс: ";
    cin >> new_info->balance;
    cout << endl;
    cout << "Введите новый баланс: ";
    cin >> new_bal;
    cout << endl;
    new_info->balance = new_bal;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    person local_human;
    double money = 0;
    change_balance(&local_human, money);
    cout << "Ваш счет: " << local_human.name << ", " << local_human.number << ", " << local_human.balance << endl;

    return 0;
}
