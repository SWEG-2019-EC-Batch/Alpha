TASK 3: TRIP SPEED AND FUEL COST CALCULATION

1. Problem Analysis

1.1 Input

- Distance travelled in kilometres.
- Travel time in hours.
- Travel time in minutes.
- Fuel consumption rate in litres per 100 kilometres.
- Price per litre of fuel in Birr.

1.2 Output

- Total travel time in hours.
- Average speed in kilometres per hour.
- Amount of fuel used in litres.
- Total fuel cost in Birr.

1.3 Process

1. Read the distance, hours, minutes, fuel consumption rate and fuel price.
2. Convert the travel time into hours.
3. Calculate the average speed by dividing the distance by the total travel time.
4. Calculate the amount of fuel used.
5. Calculate the total fuel cost.
6. Display the total travel time, average speed, fuel used and fuel cost.

1.4 Formula

Total Time = Hours + (Minutes / 60)

Average Speed = Distance / Total Time

Fuel Used = (Distance × Fuel Consumption Rate) / 100

Fuel Cost = Fuel Used × Price per Litre

2. Variables

Variable    | Data type| Purpose
distance    | double|      Stores distance travelled
hours       |double| Stores travel time in hours
minutes     | double| Stores additional travel time in minutes
fuelRate    | double| Stores fuel consumption rate
fuelPrice   | double| Stores fuel price per litre
totalTime   | double| Stores total travel time
averageSpeed| double| Stores average speed
fuelUsed    | double| Stores amount of fuel consumed
fuelCost    | double| Stores total fuel cost

3. C++ Code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, hours, minutes;
    double fuelRate, fuelPrice;
    double totalTime, averageSpeed;
    double fuelUsed, fuelCost;

    cout << "Enter distance in kilometres: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter additional minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption rate (L/100km): ";
    cin >> fuelRate;

    cout << "Enter fuel price per litre: ";
    cin >> fuelPrice;

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelRate) / 100.0;

    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);

    cout << "Total Travel Time = " << totalTime << " hours" << endl;
    cout << "Average Speed = " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used = " << fuelUsed << " litres" << endl;
    cout << "Fuel Cost = " << fuelCost << " Birr" << endl;

    return 0;
}
