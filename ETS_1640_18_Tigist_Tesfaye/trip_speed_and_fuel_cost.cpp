/*
Task 3: Trip speed and fuel cost

(a) Inputs and outputs
Inputs: distance (km), travel time (hours and minutes),
        fuel use (liters per 100 km), price per liter (birr)
Outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
         each with two decimals

(b) Process
1. Read distance, hours, minutes, fuel use and price per liter.
2. timeHours = hours + minutes / 60.0 (casting avoids integer division)
3. speed = distance / timeHours
4. fuel = distance * fuel use / 100
5. cost = fuel * price
6. Print speed, fuel and cost with two decimals.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours, minutes;
    double distance, per100, price;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time (hours minutes): ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> per100;
    cout << "Enter price per liter (birr): ";
    cin >> price;

    double timeHours = hours + static_cast<double>(minutes) / 60;
    double speed = distance / timeHours;
    double fuel = distance * per100 / 100;
    double cost = fuel * price;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << speed << " km/h" << endl;
    cout << "Fuel used: " << fuel << " liters" << endl;
    cout << "Fuel cost: " << cost << " birr" << endl;
    return 0;
}
