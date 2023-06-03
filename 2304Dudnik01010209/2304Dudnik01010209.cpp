#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, y1, y2, y3, z;
    cout << "Програма для обчислення алеграїчного виразу" << endl;
    cout << "Введіть невідомий Х: ";
    cin >> x;
    //обчислення формули
    z = 3 * pow(x, 3) - 2 * pow(x, 2) + 3 * x - 1;
    cout << "Результат виконання становить: " << z << endl;
    //перевірка виконання послідовності дій у С++
    y1 = pow(x, 3) * 3;
    y2 = pow(x, 2) * 2;
    y3 = 3 * x;
    y = y1 - y2 + y3 - 1;
    cout << "Перевірка результату, результат становить: " << y << endl;
    if (y == z)
    {
        cout << "Результат обчислення однаковий" << endl;
    }
    else
    {
        cout << "Результат обчислення не однаковий" << endl;
    }
    return 0;
}
