/*
1. Problem description
Write a C++ program that reads the distance of a trip in km, the travel time as hours and minutes (whole numbers), the car's fuel use in liters per 100 km, and the price per liter (birr). Print the average speed (km/h), the fuel used (liters) and the fuel cost (birr), each with two decimals.

2. Problem analysis
2.1 Input: distance, hours, minutes, fuelEfficiency, pricePerLiter
2.2 Output: averageSpeed, fuelUsed, fuelCost

3. Process (operations)
1. Declare variables for all inputs and outputs.
2. Print a prompt and read all five inputs.
3. Calculate the total time in hours (casting minutes to double).
4. Calculate average speed.
5. Calculate fuel used.
6. Calculate fuel cost.
7. Print the results with two decimal places.

4. Design the program
4.1 Variables: what and how?

| Variable       | Type   | Why this type               |
|----------------|--------|-----------------------------|
| distance       | double | Can have decimals.          |
| hours          | int    | Time read as whole numbers. |
| minutes        | int    | Time read as whole numbers. |
| fuelEfficiency | double | E.g., 8.5 L/100km.          |
| pricePerLiter  | double | Money with decimals.        |
| totalHours     | double | Result of calculation.      |
| averageSpeed   | double | Result of calculation.      |
| fuelUsed       | double | Result of calculation.      |
| fuelCost       | double | Result of calculation.      |


4.2 Reading the input
cout << "Enter distance (km), hours, minutes, liters/100km, price/liter: ";
cin >> distance >> hours >> minutes >> fuelEfficiency >> pricePerLiter;

4.3 Calculation
totalHours = hours + (static_cast<double>(minutes) / 60.0);
averageSpeed = distance / totalHours;
fuelUsed = (distance / 100.0) * fuelEfficiency;
fuelCost = fuelUsed * pricePerLiter;

4.4 Printing the result
cout << fixed << setprecision(2);
cout << "Average Speed: " << averageSpeed << " km/h" << endl;
cout << "Fuel Used: " << fuelUsed << " liters" << endl;
cout << "Fuel Cost: " << fuelCost << " birr" << endl;
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 4.1: Variables
    double distance, fuelEfficiency, pricePerLiter;
    int hours, minutes;
    double totalHours, averageSpeed, fuelUsed, fuelCost;

    // 4.3: Read input
    cout << "Enter distance (km), hours, minutes, liters/100km, price/liter: ";
    cin >> distance >> hours >> minutes >> fuelEfficiency >> pricePerLiter;

    // 4.4: Calculate
    // static_cast is crucial here to prevent integer division (e.g., 30/60 = 0)
    totalHours = hours + (static_cast<double>(minutes) / 60.0);
    
    averageSpeed = distance / totalHours;
    fuelUsed = (distance / 100.0) * fuelEfficiency;
    fuelCost = fuelUsed * pricePerLiter;

    // 4.5: Print result
    cout << fixed << setprecision(2);
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
