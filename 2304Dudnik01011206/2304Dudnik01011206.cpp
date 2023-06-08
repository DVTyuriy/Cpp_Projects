#include <iostream>
#include <iomanip>

using namespace std;

void print(double rez) {
    cout << fixed;
    cout << setprecision(2) << "You can get money: " << rez << "UAH" << endl;
}

void money(double sum, double stavka, int strok, double podatok = 0.805) {
    double rez_fact;
    rez_fact = sum + (sum * stavka / 100 * strok / 12 * podatok);
    print(rez_fact);
}

int main()
{
    float give_money, bank_stavka, tax;
    int month;
    cout << "How money you give: ";
    cin >> give_money;

    cout << "How much percent for year: ";
    cin >> bank_stavka;

    cout << "How long(month): ";
    cin >> month;

    cout << "Tax: ";
    cin >> tax;
    if (tax == 0)
        tax = 1;

    money(give_money, bank_stavka, month, tax);
   
    return 0;
}
