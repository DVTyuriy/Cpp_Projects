#include <iostream>

using namespace std;

int factorial(int num) {
    int rez_fact = 1;
    for (int i = 1; i <= num; i++) {
        rez_fact *= i;
    }
    return rez_fact;
}

int main()
{
    int get_num, rez_num;
    cout << "Enter number for find factorial: ";
    cin >> get_num;
    rez_num = factorial(get_num);
    cout << "The facorial namber is: " << rez_num << endl;
}

