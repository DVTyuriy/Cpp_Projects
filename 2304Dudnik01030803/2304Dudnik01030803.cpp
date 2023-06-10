#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Welcome" << endl;
    int sum = 0;
    array <int, 10> test_array = { -1, 0, 1, -2, 2, -3, 3, 4, -4, 6 };
    //cout << test_array.size() << endl;
    for (int i = 0; i < 10; i++)
        if (test_array[i] < 0)
            sum += test_array[i];
    cout << "Sum of negative numbers" << sum << endl;


}


