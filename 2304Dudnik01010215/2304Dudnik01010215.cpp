#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Програма для перетворення верcти в кілометри" << endl;
    const double koef = 1.067f;
    float verst;
    double kilometers;
    cout << "Введіть кількість верст: ";
    cin >> verst;
    kilometers = verst * koef;
    cout << "Після переводу, кількість кілометрів становить: ";
    //fixed для вивода фіксованої кількості чисел після коми 
    //setprecision(3) фіксація '3' знаків після коми
    cout << fixed;
    cout << setprecision(3) << kilometers << "км" << endl;
    return 0;
}
