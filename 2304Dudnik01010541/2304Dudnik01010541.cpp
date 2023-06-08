#include <iostream>
using namespace std;
bool PerNum(int);
int main()
{
    int num, sum;
    

    cout << "Enten number: ";
    cin >> num;

    for (int j = 1; j <= num; j++) {
        sum = 0;
        for (int i = 1; i <= j / 2; i++) {
            if (j % i == 0) {
                sum += i;
            }
        }
        if (sum == j) {
            cout << "Found perfect number: " << j << endl;
        }
    }
}