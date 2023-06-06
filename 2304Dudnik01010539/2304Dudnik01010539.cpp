#include <iostream>
using namespace std;

int main()
{
	cout << "Program for finding the same numbers" << endl;
	int j=0;
	int i_1, i_2, i_3;

	for (int i = 100; i <= 999; i++){
		i_1 = i / 100;
		i_2 = i % 100 / 10;
		i_3 = i % 100 % 10;

		if (i_1 == i_2 || i_1 == i_3 || i_2 == i_3) {
			j++;
		}
	}
	cout << "Matches found: " << j;

	return 0;
}