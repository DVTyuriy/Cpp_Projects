#include <iostream>

using namespace std;

int factorial(int num) {
    int rez_fact = 1;
    if (num > 0) {
        for (int i = 1; i <= num; i++) {
            rez_fact *= i;
        }
    }
    return rez_fact;
}

int main()
{
    int get_num_student, get_num_seats;
    long rez_num;
    cout << "Enter number of students: ";
    cin >> get_num_student;
    cout << "Enter number of seats: ";
    cin >> get_num_seats;
    if (get_num_student > get_num_seats) {
        cout << "Students do not fit" << endl;
        exit(0);
    }
    rez_num = factorial(get_num_seats) / factorial(get_num_seats - get_num_student);
    cout << "The variants are stated:  " << rez_num << endl;
    return 0;
}

