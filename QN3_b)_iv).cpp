#include <iostream>
using namespace std;

int main() {
    double balance, totalCost = 0.0, surcharge = 0.0, vat = 0.0;
    int units;
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
    // Applies the 15% surcharge
    surcharge = totalCost * 0.15;
    totalCost += surcharge;
    // Applies the 18% VAT
    vat = totalCost * 0.18;
    totalCost += vat;
    // Checks if the balance is sufficient to cover the total cost
    if (balance >= totalCost) {
        // Deducts the total cost from the balance
        balance -= totalCost;
        cout << "Transaction successful!" << endl;
        cout << "Total cost (including surcharge and VAT): " << totalCost << " UGX" << endl;
        cout << "Remaining balance: " << balance << " UGX" << endl;
    } else {
        // Insufficient balance
        cout << "Error: Insufficient balance!" << endl;
        cout << "Total cost (including surcharge and VAT): " << totalCost << " UGX" << endl;
        cout << "Your balance before usage: " << balance << " UGX" << endl;
    }
    return 0;
}

