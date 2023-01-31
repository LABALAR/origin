#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int size1=0; int size2=0;
    ifstream in("C:/Users/ser/Desktop/homeworks/IDE. 1 lesson/IDE 1/IDE 1/in.txt");
    ofstream out("C:/Users/ser/Desktop/homeworks/IDE. 1 lesson/IDE 1/IDE 1/out.txt");

    if (in.is_open())
    {
        in >> size1;
        cout << "size1 = " << size1 << endl;
        int* arr1 = new int[size1];                 //динамический массив 1
        for (int i = 0; i < size1; i++)
        {
            in >> arr1[i];
            cout << arr1[i] << " ";
        }
        cout << endl;
        in >> size2;
        cout << "size2 = " << size2 << endl;
        int* arr2 = new int[size2];                 //динамический массив 2
        for (int i = 0; i < size2; i++)
        {
            in >> arr2[i];
            cout << arr2[i] << " ";
        }

        int tmp = arr2[size2 - 1];
        for (int i = (size2 - 1); i >= 0; i--)
        {
            arr2[i] = arr2[i - 1];
        }
        arr2[0] = tmp;
        cout << endl;

        out << size2 << '\n';
        for (int i = 0; i < size2; i++)
        {
            out << arr2[i];
            cout << arr2[i] << " ";
        }

        int tmp1 = arr1[0];
        cout << "arr1[0] = " << tmp1 << endl;
        for (int i = 0; i < (size1 - 1); i++)
        {
            arr1[i] = arr1[i + 1];
            cout << "arr1[" << i << "] = " << arr1[i] << endl;
        }
        arr1[size1 - 1] = tmp1;
        cout << "arr1[" << size1 - 1 << "] = " << arr1[size1 - 1] << endl;
        out << '\n' << size1 << '\n';
        for (int i = 0; i < size1; i++)
        {
            out << arr1[i];
            cout << arr1[i] << " ";
        }
        delete[] arr1;
        delete[] arr2;
        in.close();
    }
    else
    {
        cout << "File is not open!" << endl;
    }

    cin.get();
    return 0;
}

