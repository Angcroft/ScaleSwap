#include <iostream>
#include <map>
#include <string>

using namespace std;

//  Constant definition
const double METER_TO_FOOT = 3.28084;
const double FOOT_TO_METER = 0.3048;

//  Converting from meters to foot
double meters_to_foot(double meters) {
    return meters * METER_TO_FOOT;
}

//  Converting from foot to meters
double foot_to_meters(double foot) {
    return foot * FOOT_TO_METER;
}

int main() {
    //  Storing conversion options
    map<int, string> ops = {
        {1, "Meters to foot"},
        {2, "Foot to meters"},
        {3, "Exit"},
    };

    int op;
    double value;

    cout << "Welcome to ScaleSwap, please choose a number" << endl;

    //  Menu
    do {
        cout << "Available options: " << endl;
        for (const auto& entry : ops) {
            cout << entry.first << ". " << entry.second << endl;
        }
        cout << "Choose an option: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Meters input: ";
                cin >> value;
                cout << value << " meters equals to " << meters_to_foot(value) << " foot.";
                break;
            case 2:
                cout << "Foot input: ";
                cin >> value;
                cout << value << " foot equals to " << foot_to_meters(value) << " meters.";
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Incorrect option. Please, select a listed number." << endl;
                continue;
        }
    } while (op != 3);

    return 0;
}