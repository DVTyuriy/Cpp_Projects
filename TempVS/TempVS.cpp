#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{   //print list questions to the screen
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int enter_num, dev_num;
        string fail = "I can't count negative number of days or zero";

        cout << "Hello, welcome to the programme where you can get the number for month in year" << endl;
        cout << "Enter the day number: ";
        cin >> enter_num;

        if (enter_num > 365)
        {
            dev_num = enter_num / 365;
                     enter_num = enter_num % 365;
            enter_num += dev_num;
            cout << "The number day in year: " << enter_num << "\n" ;
        }
        cout << "The number month is: ";
        if (enter_num <= 0)
            cout << fail;
        else if (enter_num > 0 && enter_num <= 31)
            cout << "1";
        else if (enter_num > 31 && enter_num <= 59)
            cout << "2";
        else if (enter_num > 59 && enter_num <= 90)
            cout << "3";
        else if (enter_num > 90 && enter_num <= 120)
            cout << "4";
        else if (enter_num > 120 && enter_num <= 151)
            cout << "5";
        else if (enter_num > 151 && enter_num <= 181)
            cout << "6";
        else if (enter_num > 181 && enter_num <= 212)
            cout << "7";
        else if (enter_num > 212 && enter_num <= 243)
            cout << "8";
        else if (enter_num > 243 && enter_num <= 273)
            cout << "9";
        else if (enter_num > 273 && enter_num <= 304)
            cout << "10";
        else if (enter_num > 304 && enter_num <= 334)
            cout << "11";
        else if (enter_num > 334 && enter_num <= 365)
            cout << "12";

        return 0;
}
