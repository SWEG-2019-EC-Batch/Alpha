/*
Task 2: Electricity bill

(a) Inputs and outputs
Input: units used in the month (whole number, kWh)
Outputs: energy charge, service charge, total bill (two decimals)

(b) Process
1. Read the units used.
2. energy = (units <= 50) ? units * 1.50 : 50 * 1.50 + (units - 50) * 2.00
3. service = 10
4. total = energy + service
5. Print the energy charge, service charge and total with two decimals.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int BLOCK = 50;
    const double RATE1 = 1.50, RATE2 = 2.00, SERVICE = 10.0;
    int units;

    cout << "Enter units used (kWh): ";
    cin >> units;

    double energy = (units <= BLOCK)
        ? units * RATE1
        : BLOCK * RATE1 + (units - BLOCK) * RATE2;
    double total = energy + SERVICE;

    cout << fixed << setprecision(2);
    cout << "Energy charge: " << energy << " birr" << endl;
    cout << "Service charge: " << SERVICE << " birr" << endl;
    cout << "Total bill: " << total << " birr" << endl;
    return 0;
}
