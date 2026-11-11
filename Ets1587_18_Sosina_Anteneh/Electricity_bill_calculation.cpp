TASK 2: ELECTRICITY BILL CALCULATION

1. Problem Analysis

1.1 Input

- Number of electricity units consumed.

1.2 Output

- Energy charge
- Service charge
- Total electricity bill

1.3 Process

1. Read the number of electricity units consumed.
2. Check whether the units are greater than 50 using the conditional operator.
3. If the units are greater than 50, charge 1.50 Birr for the first 50 units and 2.00 Birr for each additional unit.
4. If the units are 50 or less, multiply the units by 1.50 Birr.
5. Add the fixed service charge of 10 Birr.
6. Display the energy charge, service charge and total bill.

1.4 Formula

If Units > 50:

Energy Charge = (50 × 1.50) + ((Units - 50) × 2.00)

If Units ≤ 50:

Energy Charge = Units × 1.50

Total Bill = Energy Charge + 10.00

2. Variables

Variable     |Data type| Purpose
units         | double | Stores electricity units consumed
energyCharge  | double | Stores energy charge
serviceCharge | double | Stores fixed service charge
totalBill     | double | Stores total electricity bill

3. C++ Code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double units, energyCharge;
    double serviceCharge = 10.0;
    double totalBill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    energyCharge = (units > 50) ?
        (50 * 1.50 + (units - 50) * 2.00) :
        (units * 1.50);

    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy Charge = " << energyCharge << " Birr" << endl;
    cout << "Service Charge = " << serviceCharge << " Birr" << endl;
    cout << "Total Electricity Bill = " << totalBill << " Birr" << endl;

    return 0;
}
