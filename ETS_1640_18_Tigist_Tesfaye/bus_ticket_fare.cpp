// bus_ticket_fare.cpp
// Calculates a bus trip fare with:
//   - base fare chosen by route (switch case, 5 routes)
//   - extra charge for bags over 20 kg (rate per kg entered by user)
//   - discounts for children, elders and students

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ---- Declare variables ----
    const short int WEIGHT_LIMIT = 20;   // free bag weight in kg

    short int route;
    short int age;
    char is_stud;
    float basefare = 0, bag_weight, rate;
    float extra_charge = 0;
    float discount_percent = 0;
    float discount = 0;
    float total_fare;
    string route_name;

    // ---- Choose route ----
    cout << "===== BUS TICKET FARE =====" << endl;
    cout << "1. Bahir Dar" << endl;
    cout << "2. Hawassa" << endl;
    cout << "3. Adama" << endl;
    cout << "4. Jimma" << endl;
    cout << "5. Mekelle" << endl;
    cout << "Enter the route number (1-5): ";
    cin >> route;

    switch (route)
    {
        case 1:
            route_name = "Bahir Dar";
            basefare = 900;
            break;
        case 2:
            route_name = "Hawassa";
            basefare = 600;
            break;
        case 3:
            route_name = "Adama";
            basefare = 250;
            break;
        case 4:
            route_name = "Jimma";
            basefare = 700;
            break;
        case 5:
            route_name = "Mekelle";
            basefare = 1200;
            break;
        default:
            cout << "Invalid route number!" << endl;
            return 1;
    }

    // ---- Bag information ----
    cout << "Enter the bag weight (kg): ";
    cin >> bag_weight;

    if (bag_weight < 0)
    {
        cout << "Invalid bag weight!" << endl;
        return 1;
    }

    // ---- Calculate extra charge ----
    if (bag_weight > WEIGHT_LIMIT)
    {
        cout << "Enter the rate per kg for extra weight (Birr): ";
        cin >> rate;
        extra_charge = (bag_weight - WEIGHT_LIMIT) * rate;
    }

    // ---- Traveller information ----
    cout << "Enter the traveller's age: ";
    cin >> age;

    if (age <= 0)
    {
        cout << "Invalid age!" << endl;
        return 1;
    }

    cout << "Is the traveller a student? (Y/N): ";
    cin >> is_stud;

    // ---- Calculate discount ----
    if (age <= 12 && (is_stud == 'Y' || is_stud == 'y'))
        discount_percent = 65;      // child + student
    else if (age >= 60 && (is_stud == 'Y' || is_stud == 'y'))
        discount_percent = 40;      // elder + student
    else if (age <= 12)
        discount_percent = 50;      // child
    else if (age >= 60)
        discount_percent = 25;      // elder
    else if (is_stud == 'Y' || is_stud == 'y')
        discount_percent = 15;      // student
    else
        discount_percent = 0;

    discount = basefare * discount_percent / 100;

    // ---- Calculate total fare ----
    total_fare = basefare - discount + extra_charge;

    // ---- Display trip information ----
    cout << fixed << setprecision(2);
    cout << "\n===== TRIP INFORMATION =====" << endl;
    cout << "Route              : " << route_name << endl;
    cout << "Base fare          : " << basefare << " Birr" << endl;
    cout << "Discount (" << discount_percent << "%) : " << discount << " Birr" << endl;
    cout << "Bag weight         : " << bag_weight << " kg" << endl;
    cout << "Extra bag charge   : " << extra_charge << " Birr" << endl;
    cout << "Total fare         : " << total_fare << " Birr" << endl;

    return 0;
}
