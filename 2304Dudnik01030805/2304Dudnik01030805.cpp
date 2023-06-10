#include <iostream>
#include <array>
#include <algorithm>
#include <time.h>
#include <ctime>

using namespace std;

int main()
{
    int k;
    cout << "Welcome" << endl;
    array <int, 15> test_array = { -1, 0, 1, -2, 2, -3, 3, 4, -4, 6, -10, 15, 99, 5, -36 };
    
    //cout << test_array.size() << endl;
    int min = test_array[0];
    int max = test_array[0];
    int n = sizeof(test_array) / sizeof(test_array[0]);
    cout << "Length massive is: " << n << endl;
    for (int i = 0; i < n; i++)
        if (test_array[i] > max) 
            max = test_array[i];
        else if (test_array[i] < min)
            min = test_array[i];
    cout << "Max number is: " << max << endl;
    cout << "Min number is: " << min << endl;
}