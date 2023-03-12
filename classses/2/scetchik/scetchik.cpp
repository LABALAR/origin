#include <iostream>
//#include <windows.h>
#include <cstdlib>

using namespace std;



class Counter
{
private:
    int num;

public:

    Counter()
    {
        num = 1;
    }

    Counter(int in_num)
    {
        num = in_num;
    }

    int plus()
    {
        num++;
        return num;
    }
    int minus()
    {
        num--;
        return num;
    }
    int res()
    {
        cout << num << endl;
        return num;
    }

    /*         int setnum(int t_num)
             {
                int  num = t_num;
                return num;
             }
     */
};

int main()
{
    //  SetConsoleCP(1251);
    //  SetConsoleOutputCP(1251);
    //  setlocale(LC_ALL, "Russian");


    int n = 0, a = 0;
    char command = 0;
    string answer;
    //    Counter count;

    cout << "Do you want change num? Answer 'yes' or 'no':";


    while (1)
    {
        cin >> answer;
        if (answer == "yes")
        {
            cout << "THIS IS YES" << endl;
            cin >> n;
            Counter count(n);

            while (1)
            {
                cout << "Vvedite '+', '-', '=', 'x':  ";
                cin >> command;

                switch (static_cast<int>(command))
                {
                case '+':
                {

                    count.plus();
                    continue;
                }
                case '-':
                {

                    count.minus();
                    continue;
                }
                case '=':
                {

                    count.res();
                    continue;
                }

                default:
                {
                    cout << "Error! Wrong command! Try again." << endl;
                    continue;
                }

                case 'x':
                {
                    break;
                }
                }
                break;
            }





            //          count.setnum(n);
            break;
        }
        else if (answer == "no")
        {
            cout << "THIS IS NO" << endl;
            Counter count;

            while (1)
            {
                cout << "Vvedite '+', '-', '=', 'x':  ";
                cin >> command;

                switch (static_cast<int>(command))
                {
                case '+':
                {
                    count.plus();
                    continue;
                }
                case '-':
                {
                    count.minus();
                    continue;
                }
                case '=':
                {
                    count.res();
                    continue;
                }

                default:
                {
                    cout << "Error! Wrong command! Try again." << endl;
                    continue;
                }

                case 'x':
                {
                    break;
                }
                }
                break;
            }





            //          n = count.setnum(1);          
            break;
        }
        else
        {
            cout << "Error! Wrong answer! Try again :)" << endl;
            continue;
        }
    }

    /*
    while (1)
     {
         cout << "Vvedite '+', '-', '=', 'x':  ";
         cin >> command;

         switch (static_cast<int>(command))
         {
             case '+':
             {
                 Counter (n++);
 //                n = count.plus(n);
                 continue;
             }
                     case '-':
                     {
                         Counter (n--);
 //                        n = count.minus(n);
                         continue;
                     }
                             case '=':
                             {
                                 count.res();
 //                                n = count.res(n);
                                 continue;
                             }

                                     default:
                                     {
                                         cout << "Error! Wrong command! Try again." << endl;
                                         continue;
                                     }

                                             case 'x':
                                             {
                                                 break;
                                             }
         }
     break;
     }
     */

    cout << "====End programm====" << endl;
    cin >> a;


    return 0;
}

