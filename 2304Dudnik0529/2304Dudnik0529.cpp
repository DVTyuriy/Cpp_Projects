#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string default_answer = "Please enter number of operation\n";
    string operation_string = "0 - exit\n1 - addition(+)\n2 - subtraction(-)\n3 - multiplication(*)\n4 - division(/)\n5 - the remainder(%)\nMake a choice!";
    string first_num = "Enter the first number";
    string second_num = "Enter the second number";
    string result = "Result: ";
    string exit_mesage = "Good bye";
    string fail = "You cannot division by zero\n";
    double enter_first;
    double enter_second;
    double result_num;
    char operant;
    char count = 0;
    cout << "Hello, Welcome to the program for calculating" << endl;

    do
    {
        cout << default_answer;
        cout << operation_string << endl;
        cin >> operant;
    
        switch (operant)
        {
            case '0':
            {
                cout << exit_mesage << endl;
                count++;
                break;
            }
            case '1':
            {
                cout << first_num << endl;
                cin >> enter_first;
                cout << second_num << endl;
                cin >> enter_second;
                result_num = enter_first + enter_second;
                cout << result << result_num << endl;
                cout << endl;
                break;
            }
            case '2':
            {
                cout << first_num << endl;
                cin >> enter_first;
                cout << second_num << endl;
                cin >> enter_second;
                result_num = enter_first - enter_second;
                cout << result << result_num << endl;
                cout << endl;
                break;
            }
            case '3':
            {
                cout << first_num << endl;
                cin >> enter_first;
                cout << second_num << endl;
                cin >> enter_second;
                result_num = enter_first * enter_second;
                cout << result << result_num << endl;
                cout << endl;
                break;
            }
            case '4':
            {
                cout << first_num << endl;
                cin >> enter_first;
                cout << second_num << endl;
                cin >> enter_second;
                if (enter_second == 0)
                {
                    cout << fail << endl;
                    break;
                }
                else
                {
                    result_num = enter_first / enter_second;
                    cout << result << result_num << endl;
                    cout << endl;
                    break;
                }
            }
            case '5':
            {
                cout << first_num << endl;
                cin >> enter_first;
                cout << second_num << endl;
                cin >> enter_second;
                if (enter_second == 0)
                {
                    cout << fail << endl;
                    break;
                }
                else
                {
                    result_num = (int)enter_first % (int)enter_second;
                    cout << result << result_num << endl;
                    cout << endl;
                    break;
                }
            }
            default:

            break;
            
        }
    
    } while (count == 0);
    return 0;
}
