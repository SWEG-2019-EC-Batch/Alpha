/*
1. Problem description
Write a C++ program that reads the electricity units (kWh, a whole number) used in a month. The first 50 units cost 1.50 birr each and every unit above 50 costs 2.00 birr. A fixed service charge of 10 birr is added. Print the energy charge, the service charge and the total bill (two decimals). Use the conditional operator (no if).

2. Problem analysis
2.1 Input: units used
2.2 Output: energy charge, service charge, total bill

3. Process (operations)
1. Declare variables to hold the units, charges, and total.
2. Define the fixed service charge as a constant.
3. Print a prompt and read the units.
4. Calculate the energy charge using the conditional operator (deciding between the under-50 formula and over-50 formula).
5. Calculate the total by adding the service charge to the energy charge.
6. Print the results with two decimal places.

4. Design the program
4.1 Variables: what and how?

| Variable     | Type   | Why this type             |
|--------------|--------|---------------------------|
| units        | int    | Units are whole numbers.  |
| energyCharge | double | Money with decimals.      |
| totalBill    | double | Money with decimals.      |
| costUnder50  | double | Holds result if units<=50 |
| costOver50   | double | Holds result if units>50  |

4.2 Constants
const double SERVICE_CHARGE = 10.00;

4.3 Reading the input
cout << "Enter electricity units used: ";
cin >> units;

4.4 Calculation
costUnder50 = units * 1.50;
costOver50 = (50 * 1.50) + ((units - 50) * 2.00);
energyCharge = (units <= 50) ? costUnder50 : costOver50;
totalBill = energyCharge + SERVICE_CHARGE;

4.5 Printing the result
cout << fixed << setprecision(2);
cout << "Energy Charge: " << energyCharge << " birr" << endl;
cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
cout << "Total Bill: " << totalBill << " birr" << endl;
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 4.1 and 4.2: Variables and Constants
    int units;
    double energyCharge, totalBill, costUnder50, costOver50;
    const double SERVICE_CHARGE = 10.00;

    // 4.3: Read input
    cout << "Enter electricity units used: ";
    cin >> units;

    // 4.4: Calculate
    costUnder50 = units * 1.50;
    costOver50 = (50 * 1.50) + ((units - 50) * 2.00);
    
    // Conditional operator used to pick the correct charge
    energyCharge = (units <= 50) ? costUnder50 : costOver50;
    totalBill = energyCharge + SERVICE_CHARGE;

    // 4.5: Print result
    cout << fixed << setprecision(2);
    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;

    return 0;
}
