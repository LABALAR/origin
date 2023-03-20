#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

class adress
{
private:
    string street, city;
    int num_home, num_flat;

public:

    adress(string l_city, string l_street, int l_num_home, int l_num_flat)
    {
        city = l_city;
        street = l_street;
        num_home = l_num_home;
        num_flat = l_num_flat;

    }
    string get_out_adress()                                             //формирование строки, для записи в файл
    {
        string str;
        stringstream ss;

        str = this->city;
        str += ",\t";
        str += this->street;
        str += ",\t";

        ss << this->num_home;                                         //костыль. запись int to string через поток
        str += ss.str();
        str += ",\t";
        //      ss.clear();                                                     // так очистка потока не работает
        ss.str(string());                                               // очистка потока работает

        ss << this->num_flat;                                         //костыль. запись int to string через поток
        str += ss.str();
        str += ". ";
        //      ss.clear();                                                     // так очистка потока не работает
        ss.str(string());                                               // очистка потока работает

        return str;
    }

    string get_city()
    {
        return city;
    }



};



void  sort(adress* arr[255], int size)                                  //сортировка 
{
    //  for (int i=0; i < size; i++)
    //        {
    for (int j = (size - 1); j >= 1; j--)
    {
        if ((arr[j - 1]->get_city()) > (arr[j]->get_city()))
        {
            adress* tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
        }
    }
    //        }
}

int main()
{
    int size = 0;
    string street, city;
    int num_home = 0, num_flat = 0;

    ifstream file_read("in.txt");
    ofstream file_write("out.txt");
    if (!file_read.is_open())
    {
        cout << "Error! File is not open!" << endl;
    }

    file_read >> size;
    cout << "size = " << size << endl;
   // adress* arr[255];                                                ////
    adress** arr = new adress *[size];



    for (int i = 0; i < size; i++)
    {
        file_read >> city;
        cout << "city = " << city << endl;
        file_read >> street;
        cout << "street = " << street << endl;
        file_read >> num_home;
        cout << "num_home = " << num_home << endl;
        file_read >> num_flat;
        cout << "num_flat = " << num_flat << endl;

        arr[i] = new adress(city, street, num_home, num_flat);        //arr[i]  - указатель на обьект класса

        cout << arr[i]->get_out_adress();                           // вызов метода класса
        /////////////////////////////////////////////////





    }

    file_write << size << "\n";

    for (int i = 0; i < size; i++)                                   //
    {                                                                //сортировка

        sort(arr, size);

        file_write << arr[i]->get_out_adress() << "\n";               //запись готовой строки в файл
     //   delete arr[i];                                                  //очистка памяти (почему не работает?)


    }

    for (int i = 0; i < size; i++)                                  // очистка памяти 
    {
        delete arr[i];
    }
    delete arr;
    cin.get();
    return 0;
}
