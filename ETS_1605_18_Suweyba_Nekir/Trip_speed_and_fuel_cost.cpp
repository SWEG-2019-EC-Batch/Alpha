TASK 3: TRIP SPEED AND FUEL COST

1. Problem Description
Write a C++ program that calculates the average speed, fuel used, and fuel cost of a trip.
The program should read the following information from the user:
- Distance traveled in kilometers.
- Travel time in hours and minutes.
- Fuel consumption in liters per 100 kilometers.
- Price of fuel per liter in birr.
The program should calculate and display:
- Average speed in kilometers per hour (km/h).
- Total fuel used in liters.
- Total fuel cost in birr.
All calculated results should be displayed to two decimal places.
2. Analysis: Input and Output
Input:

1. Distance traveled (in kilometers).
2. Travel time in hours.
3. Travel time in minutes.
4. Fuel consumption (liters per 100 kilometers).
5. Price of fuel per liter (in birr).
Output:

1. Average speed (km/h).
2. Fuel used (liters).
3. Fuel cost (birr).
All output values should be displayed to two decimal places.
3. Process
1. Start the program.

2. Declare variables for distance, hours, minutes, fuel consumption, fuel price, total time, average speed, fuel used, and fuel cost.

3. Declare constants for minutes per hour (60) and kilometers per 100 kilometers (100).

4. Read the distance, travel time, fuel consumption, and fuel price from the user.

5. Convert the travel time into hours using the formula:

Total Time = Hours + (Minutes / 60.0)

6. Calculate the average speed:

Average Speed = Distance / Total Time

7. Calculate the fuel used:

Fuel Used = (Distance × Fuel Consumption) / 100

8. Calculate the fuel cost:

Fuel Cost = Fuel Used × Price Per Liter

9. Display the average speed, fuel used, and fuel cost to two decimal places.

10. End the program.

4. Design

A. Variables and Data Types

       Variable| Data Type| Purpose
       distance| double| Stores the distance traveled in kilometers
          hours| int| Stores travel time in hours
        minutes| int| Stores travel time in minutes
       fuelRate| double| Stores fuel consumption per 100 km
  pricePerLiter| double| Stores the price of one liter of fuel
      totalTime| double| Stores the total travel time in hours
   averageSpeed| double| Stores the average speed
       fuelUsed| double| Stores the amount of fuel used
       fuelCost| double| Stores the total fuel cost
B. Constants
        Constant| Data Type| Value| Purpose
MINUTES_PER_HOUR| double| 60.0| Converts minutes into hours
      KM_PER_100| double| 100.0| Used to calculate fuel consumption
C.Input Statements

Read the distance, travel time, fuel consumption, and fuel price from the user:

cin >> distance;
cin >> hours >> minutes;
cin >> fuelRate;
cin >> pricePerLiter;
D. Calculation Statements

Convert travel time into hours:

totalTime = hours + minutes / MINUTES_PER_HOUR;

Calculate average speed:

averageSpeed = distance / totalTime;

Calculate fuel used:

fuelUsed = (distance * fuelRate) / KM_PER_100;

Calculate fuel cost:

fuelCost = fuelUsed * pricePerLiter;
E. Output Statements

Display all calculated results to two decimal places:

cout << fixed << setprecision(2);
cout << "Average Speed: " << averageSpeed << " km/h" << endl;
cout << "Fuel Used: " << fuelUsed << " liters" << endl;
cout << "Fuel Cost: " << fuelCost << " birr" << endl;
5. C++ Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double distance, fuelRate, pricePerLiter;
    int hours, minutes;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    // Declare constants
    const double MINUTES_PER_HOUR = 60.0;
    const double KM_PER_100 = 100.0;

    // Read input
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelRate;

    cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    // Convert travel time into hours
    totalTime = hours + minutes / MINUTES_PER_HOUR;

    // Calculate average speed
    averageSpeed = distance / totalTime;

    // Calculate fuel used
    fuelUsed = (distance * fuelRate) / KM_PER_100;

    // Calculate fuel cost
    fuelCost = fuelUsed * pricePerLiter;

    // Display output
    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
6. Test Case

Input| Value
Distance| 150 km
Travel time| 2 hours 30 minutes
Fuel consumption| 8 liters per 100 km
Price per liter| 60 birr

Expected Output:

Output| Expected Result
Average Speed| 60.00 km/h
Fuel Used| 12.00 liters
Fuel Cost| 720.00 birr

Conclusion

The program calculates the average speed, fuel consumption, and total fuel cost of a trip using the given distance, travel time, and fuel information. It uses arithmetic operations and floating-point calculations to display accurate results to two decimal places.
