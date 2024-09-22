#include <iostream>
using namespace std;

int main() {
    double balance;
    int units;

    // Prompts the user to input the amount of money loaded onto their account
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;

    // Prompts the user to input the number of water units consumed
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    // Outputs the entered values for confirmation
    cout << "You have loaded " << balance << " UGX onto your account." << endl;
    cout << "You have consumed " << units << " water units." << endl;

    return 0;
}

