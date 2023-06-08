

#include <iostream>
using namespace std;

bool sim_num(const int num) {
    if (num < 2)
        return false;
    for (int i = 2; i <=num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    int max_range;
    cout << "Enter the maximum range number: "<<endl;
    cin >> max_range;

    for (int i = 2; i <= max_range; i++) {
        if (sim_num(i) && sim_num(i + 2)) {
            cout << i << " and " << i + 2 << " are twin simple numbers"<<endl;
        }
    }
    
    return 0;

}

