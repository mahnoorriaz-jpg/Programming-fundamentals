#include <iostream>
using namespace std;

int main() {
    int coins[4]; // quarters, dimes, nickels, pennies
    double total_due;

    cout << "Enter number of quarters, dimes, nickels, pennies: ";
    for (int i = 0; i < 4; i++) {
        cin >> coins[i];
    }

    cout << "Enter total due: ";
    cin >> total_due;
    double total_money = coins[0] * 0.25 +
                         coins[1] * 0.10 +
                         coins[2] * 0.05 +
                         coins[3] * 0.01;
    if (total_money >= total_due)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}