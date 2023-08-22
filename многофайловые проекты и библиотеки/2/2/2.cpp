
#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    int n = 0, a = 0;
    char command = 0;
    string answer;

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

                    cout << count.res() << endl;
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
                    cout << count.res() << endl;
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
    
            break;
        }
        else
        {
            cout << "Error! Wrong answer! Try again :)" << endl;
            continue;
        }
    }


    cout << "====End programm====" << endl;
 //   cin >> a;


    return 0;
}

