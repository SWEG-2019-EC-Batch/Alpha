#include<iostream>
using namespace std;

int main()
{
    float base_fare, bag_weight, rate;
    const short int WEIGHT_LIMIT = 20;
    float total_fare;
    short int age, route;
    char is_stud, again;
    float discount;

    do {
        cout << "\nSelect route:\n";
        cout << "1. AA-BD\n";
        cout << "2. AA-HW\n";
        cout << "3. AA-AD\n";
        cout << "4. AA-JJ\n";
        cout << "5. AA-DD\n";
        cout << "enter route (1-5): ";
        cin >> route;

        switch (route)
        {
            case 1:
                base_fare = 1200;
                break;
            case 2:
                base_fare = 650;
                break;
            case 3:
                base_fare = 250;
                break;
            case 4:
                base_fare = 1500;
                break;
            case 5:
                base_fare = 1300;
                break;
            default:
                cout << "invalid route\n";
                cout << "do you want to continue? (y/n): ";
                cin >> again;
                continue;
        }

        cout << "enter age: ";
        cin >> age;
        if (age <= 0)
        {
            cout << "invalid\n";
            cout << "do you want to continue? (y/n): ";
            cin >> again;
            continue;
        }

        cout << "is student? (Y/N): ";
        cin >> is_stud;

        cout << "enter bagweight and rate: ";
        cin >> bag_weight >> rate;

        float extra_charge = 0;
        if (bag_weight > WEIGHT_LIMIT)
        {
            extra_charge = (bag_weight - WEIGHT_LIMIT) * rate;
        }

        if (age <= 12)
            discount = base_fare * 0.65;
        else if (age >= 60)
            discount = base_fare * 0.25;
        else
            discount = 0;

        if (is_stud == 'Y' || is_stud == 'y')
        {
            discount = base_fare * 0.15;
        }

        total_fare = (base_fare - discount) + extra_charge;

        cout << "\nyour trip fare information is:\n";
        cout << "basefare=" << base_fare << endl;
        cout << "discount=" << discount << endl;
        cout << "extra charge=" << extra_charge << endl;
        cout << "total fare=" << total_fare << endl;

        cout << "\ndo you want to calculate another trip? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}
