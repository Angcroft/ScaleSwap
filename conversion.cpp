#include "scaleswap.h"

using namespace std;

const map<string, double> metric_system = {
    {"Kilometer", 1000.0},
    {"Hectometer", 100.0},
    {"Decameter", 10.0},
    {"Meter", 1.0},
    {"Decimeter", 0.1},
    {"Centimeter", 0.01},
    {"Millimeter", 0.001}
};

const map<string, double> imperial_system = {
    {"Inch", 1.0},
    {"Foot", 12.0},
    {"Yard", 36.0},
    {"Mile", 63360.0},
};

double to_mt(double value, const string& unit) {
    return value * metric_system.at(unit);
}

double from_mt(double value, const string& unit) {
    return value / metric_system.at(unit);
}

double to_in(double value, const string& unit) {
    return value * imperial_system.at(unit);
}

double from_in(double value, const string& unit) {
    return value / imperial_system.at(unit);
}

double mt_to_in(double mt) {
    return mt / 0.0254;
}

double in_to_mt(double in) {
    return in * 0.0254;
}

void display_units(const map<string, double>& system) {
    for (const auto& unit : system) {
        cout << "- " << unit.first << endl;
    }
}

string getValidU(const map<string, double>& system) {
    string unit;
    while (true) {
        cout << "Enter the unit: ";
        cin >> unit;
        if (system.find(unit) != system.end()) {
            break;
        } else {
            cout << "Invalid unit. Please enter a valid unit." << endl;
        }
    }
    return unit;
}

double getValidV() {
    double value;
    while (true) {
        cout << "Enter the value to convert: ";
        if (cin >> value) {
            break;
        } else {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return value;
}

double calculate(double value, const string& unit_origin, const string& unit_destiny) {
    double value_mt, value_in, value_con;
    bool is_mt_or = metric_system.find(unit_origin) != metric_system.end();
    bool is_imp_or = imperial_system.find(unit_origin) != imperial_system.end();
    bool is_mt_des = metric_system.find(unit_destiny) != metric_system.end();
    bool is_imp_des = imperial_system.find(unit_destiny) != imperial_system.end();

    if (is_mt_or && is_mt_des) {
        value_mt = to_mt(value, unit_origin);
        value_con = from_mt(value_mt, unit_destiny);
    } else if (is_imp_or && is_imp_des) {
        value_in = to_in(value, unit_origin);
        value_con = from_in(value_in, unit_destiny);
    } else if (is_mt_or && is_imp_des) {
        value_mt = to_mt(value, unit_origin);
        value_in = mt_to_in(value_mt);
        value_con = from_in(value_in, unit_destiny);
    } else if (is_imp_or && is_mt_des) {
        value_in = to_in(value, unit_origin);
        value_mt = in_to_mt(value_in);
        value_con = from_mt(value_mt, unit_destiny);
    } else {
        cout << "Input error. Please, be sure to input the correct units." << endl;
        return -1;  // Indicates an error
    }
    return value_con;
}