#include <iostream>
using namespace std;

int main() {
    double balance;
    int units;
    double totalCost = 0.0;

    // Input: Amount loaded onto account and number of water units consumed
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;
    cout << "Enter the number of water units consumed: ";
    cin >> units;

    // Calculates the total cost based on the tiered pricing structure
    if (units <= 10) {
        totalCost = units * 150; // Cost for the first 10 units
    } else if (units <= 20) {
        totalCost = (10 * 150) + ((units - 10) * 175); // Cost for 11-20 units
    } else {
        totalCost = (10 * 150) + (10 * 175) + ((units - 20) * 200); // Cost for units beyond 20
    }

    // Outputs the calculated total cost
    cout << "Total cost before surcharge and VAT: " << totalCost << " UGX" << endl;

    return 0;
}

