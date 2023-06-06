#include <iostream>

using namespace std;

int main()
{
    cout << "The path of the turtle" << endl;
    int enter_day;
    cout << "How many days will the turtle crawl: ";
    cin >> enter_day;
    float commonway = 0, day_way = 1.5f;

    for (int i = 0; i < enter_day; i++){
        commonway += day_way;
        day_way += 0.2f;
    }
    cout << "The turtle will crawl: "<< commonway <<"m" << endl;

    return 0;
}
