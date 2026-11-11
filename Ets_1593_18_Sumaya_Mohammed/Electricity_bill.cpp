TASK 2: ELECTRICITY BILL

1. Problem Description

Write a C++ program that calculates a customer's electricity bill based on the number of electricity units consumed (kWh).

The electricity charges are calculated using the following rules:

- The first 50 units cost 1.50 birr per unit.
- Every unit above 50 costs 2.00 birr per unit.
- A fixed service charge of 10.00 birr is added to the energy charge.

The program should display the energy charge, service charge, and total bill to two decimal places. Use the conditional operator ("?:") to calculate the energy charge without using an "if" statement.

2. Analysis: Input and Output

Input:

1. Electricity units consumed (in kWh), entered as a whole number.

Output:

1. Energy charge in birr.
2. Fixed service charge in birr.
3. Total electricity bill in birr.

All amounts should be displayed to two decimal places.

3. Process

1. Start the program.
2. Declare an integer variable to store the electricity units consumed.
3. Declare double variables to store the energy charge and total bill.
4. Declare constants for:
   - First 50 units.
   - Rate of the first 50 units (1.50 birr).
   - Rate for additional units (2.00 birr).
   - Fixed service charge (10.00 birr).
5. Read the electricity units consumed from the user.
6. Calculate the energy charge using the conditional operator:
   - If the units are less than or equal to 50, multiply the units by 1.50.
   - Otherwise, calculate the cost of the first 50 units and add the cost of the remaining units at 2.00 birr per unit.
7. Calculate the total bill by adding the energy charge and service charge.
8. Display the energy charge, service charge, and total bill to two decimal places.
9. End the program.

4. Design

A. Variables and Data Types

Variable| Data Type| Purpose
units| int| Stores the electricity units consumed
energyCharge| double| Stores the calculated energy charge
totalBill| double| Stores the total electricity bill

B. Constants

Constant| Data Type| Value| Purpose
FIRST_UNITS| int| 50| Number of units in the first price range
FIRST_RATE| double| 1.50| Price per unit for the first 50 units
EXTRA_RATE| double| 2.00| Price per additional unit above 50
SERVICE_CHARGE| double| 10.00| Fixed service charge

C. Input Statement

Read the number of electricity units consumed from the user:

cin >> units;

D. Calculation Statements

Calculate the energy charge using the conditional operator:

energyCharge = (units <= FIRST_UNITS)
    ? units * FIRST_RATE
    : FIRST_UNITS * FIRST_RATE
      + (units - FIRST_UNITS) * EXTRA_RATE;

Calculate the total bill:

totalBill = energyCharge + SERVICE_CHARGE;

E. Output Statements

Display the energy charge, service charge, and total bill to two decimal places:

cout << fixed << setprecision(2);
cout << "Energy Charge: " << energyCharge << " birr" << endl;
cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
cout << "Total Bill: " << totalBill << " birr" << endl;

5. C++ Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    int units;
    double energyCharge, totalBill;

    // Declare constants
    const int FIRST_UNITS = 50;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    // Read input
    cout << "Enter electricity units consumed: ";
    cin >> units;

    // Calculate energy charge using conditional operator
    energyCharge = (units <= FIRST_UNITS)
        ? units * FIRST_RATE
        : FIRST_UNITS * FIRST_RATE
          + (units - FIRST_UNITS) * EXTRA_RATE;

    // Calculate total bill
    totalBill = energyCharge + SERVICE_CHARGE;

    // Display output
    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " birr" << endl;
    cout << "Service Charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total Bill: " << totalBill << " birr" << endl;

    return 0;
}

6. Test Cases

Test| Units Consumed| Energy Charge| Service Charge| Expected Total Bill
1| 80| 135.00 birr| 10.00 birr| 145.00 birr
2| 30| 45.00 birr| 10.00 birr| 55.00 birr

Conclusion

The program calculates the electricity energy charge based on the units consumed, adds the fixed service charge, and displays the total bill to two decimal places. It uses the conditional operator ("?:") without using an "if" statement.
