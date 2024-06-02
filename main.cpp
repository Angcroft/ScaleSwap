#include "scaleswap.h"
#include "menu_output.cpp"
#include "conversion.cpp"

using namespace std;

int main() {
    string unit_origin, unit_destiny;
    double value;
    int index;
    int finalindex;

    while (true) {
        welcomer();
        cin >> index;

        if (cin.fail() || index < 1 || index > 3) {
            errorMessager();
            continue;
        }

        if (index == 1) {
            mt_selected();
            display_units(metric_system);
            unit_origin = getValidU(metric_system);
            asker();
            cin >> index;

            if (cin.fail() || index < 1 || index > 2) {
                errorMessager();
                continue;
            }

            if (index == 1) {
                display_units(metric_system);
                unit_destiny = getValidU(metric_system);
            } else if (index == 2) {
                display_units(imperial_system);
                unit_destiny = getValidU(imperial_system);
            }
        } else if (index == 2) {
            in_selected();
            display_units(imperial_system);
            unit_origin = getValidU(imperial_system);
            asker();
            cin >> index;

            if (cin.fail() || index < 1 || index > 2) {
                errorMessager();
                continue;
            }

            if (index == 1) {
                display_units(metric_system);
                unit_destiny = getValidU(metric_system);
            } else if (index == 2) {
                display_units(imperial_system);
                unit_destiny = getValidU(imperial_system);
            }
        } else if (index == 3) {
            cout << "Exiting the program." << endl;
            break;
        }

        value = getValidV();

        double value_con = calculate(value, unit_origin, unit_destiny);

        if (value_con != -1) {
            cout << value << " " << unit_origin << " is equal to " << value_con << " " << unit_destiny << "." << endl;
        }
    }

    return 0;
}