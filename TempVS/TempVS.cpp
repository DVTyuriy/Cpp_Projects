#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
void divide(float a, float b) {
    if (b == 0) throw 100; //если ошибка выбрасывает любое число как код ошибки
    else cout << (a / b);
}


int main()
{   //print list questions to the screen
        //setlocale(LC_ALL, "UKRAINIAN");
        //setlocale(LC_ALL, "RU");

        try {
            divide(5.2f, 0.0f);
        }
        catch (int err) {
            if (err == 100) cout << "Ошибка при делении на 0" << endl;
        }

        string str1 = "Hello";
        string str2 = "World";

        str1.append(str2);
        str1.pop_back(); //удаляет последний символ
        str1.push_back('!'); //добавляет последний символ
        str1.resize(5); //изменяет длину строки
        cout << str1 << " - " << str1.length(); //выдает длину строки

        cout << ceil(1.78f) << endl; //округляет к большему
        cout << floor(1.78f) << endl; //округляет к меньшему
        cout << round(1.78f) << endl; //математическое округление

        return 0;
}


// Шаблоны функций
#include <iostream>
#include <string>

using namespace std;
template <typename T, typename T2>
void print_arr(T* arr, int len) {
    for (T2 i = 0; i < len; i++)
        cout << *(arr + i) << " ";
    cout << endl;
}

int main()
{
    int arr1[] = { 5, 6 , 7 , 8, -2, 1 };
    print_arr<int, int>(arr1, 6);

    float arr2[] = { 0.5f, 0.78f, 1.98f };
    print_arr<float, int>(arr2, 3);

}

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int random_number;
    random_number = rand();
    cout << random_number << " - псевдослучайное число\n";

    /*  
Налаштування диапазону для генератора
Если нужно генерировтаь числа от 0 до 10 или от 0 до 100?!то используем:
int a=rand()%25;
Если нужен диапазон другой, например от 11 до 16. Все просто. Число генерируемых от 0 до 5
(разница между 16 и 11), а затем «сдвинуть» результат на 11.
int a=rand()%6+11;
Аналогично можно получить другие диапазоны

    */
}

cout << fixed;
cout << setprecision(3) << kilometers << "км" << endl;