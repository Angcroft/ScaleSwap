#include "scaleswap.h"

using namespace std;

void errorMessager() {
    cout << "Invalid index. Please enter a correct index: " << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void welcomer() {
    cout << "Welcome to ScaleSwap++, the unit system converter" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Please select which will be the main unit system: " << endl;
    cout << "1. Metric System" << endl;
    cout << "2. Imperial System" << endl;
    cout << "3. Exit" << endl;
}

void mt_selected() {
    cout << "Metric System selected." << endl;
}

void in_selected() {
    cout << "Imperial System selected." << endl;
}

void asker() {
    cout << "What will be the other unit? Will it be a metric unit or an imperial unit?" << endl;
    cout << "1. Metric" << endl;
    cout << "2. Imperial" << endl;
    cout << "Enter your choice: " << endl;
}