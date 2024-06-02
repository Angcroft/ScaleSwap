# ScaleSwap++: Unit System Converter in C++

ScaleSwap++ is a command-line interface (CLI) application written in C++ for converting units between the metric and imperial systems. This project was created to understand the basics of C++ and to provide a simple tool for unit conversion.

## Features

- Convert units within the metric system.
- Convert units within the imperial system.
- Convert units between the metric and imperial systems.
- User-friendly CLI with easy-to-navigate menus.

## Requirements

To run this project, you'll need a C++ compiler like `g++`. The project has been developed and tested with modern C++ standards.

## Project Structure

The project consists of the following files:

- **main.cpp**: Contains the main logic and CLI menus.
- **conversion.cpp**: Implements the unit conversion logic.
- **menu_output.cpp**: Handles user interaction and displays menus.
- **scaleswap.h**: Header file containing function declarations and constants.

## Instructions

### Clone the Repository

```sh
git clone https://github.com/YourUsername/ScaleSwap.git
```

### Navigate to the Project Directory

```sh
cd ScaleSwap
```

### Compile the Code

```sh
g++ -o scaleswap main.cpp conversion.cpp menu_output.cpp
```

### Run the Application

```sh
./scaleswap
```

## How it works

When you run the program, you'll see the main menu with options for selecting the unit system and performing conversions.
### Main Menu Options
1. Metric System: Selects the metric system for the origin unit.
2. Imperial System: Selects the imperial system for the origin unit.
3. Exit: Closes the application.
### Converting Units
1. Select either the metric or imperial system from the main menu.
2. Choose the origin unit and the destination unit from the respective system.
3. Enter the value to convert.
4. The converted value will be displayed.

## Example Usage

### Main Menu

```sh
Welcome to ScaleSwap++, the unit system converter
----------------------------------------------------------
Please select which will be the main unit system:
1. Metric System
2. Imperial System
3. Exit
Enter your choice: 1
```

### Metric System Selected

```sh
Metric System selected.
Enter the unit: Meter
Enter the value to convert: 100
Metric System selected.
Enter the unit: Kilometer
100 Meter is equal to 0.1 Kilometer.
```

## Function Descriptions

**main.cpp**

* errorMessager(): Displays an error message for invalid input.
* welcomer(): Displays the welcome message and main menu.
* mt_selected(): Handles the selection of the metric system.
* in_selected(): Handles the selection of the imperial system.
* asker(): Prompts the user for the destination unit system.
**conversion.cpp**

* to_mt(double value, const std::string& unit): Converts a value to meters.
* from_mt(double value, const std::string& unit): Converts a value from meters to the specified metric unit.
* to_in(double value, const std::string& unit): Converts a value to inches.
* from_in(double value, const std::string& unit): Converts a value from inches to the specified imperial unit.
* mt_to_in(double mt): Converts a value from meters to inches.
* in_to_mt(double in): Converts a value from inches to meters.
* display_units(const std::map<std::string, double>& system): Displays the available units in a system.
*getValidU(const std::map<std::string, double>& system): Prompts the user for a valid unit.
* getValidV(): Prompts the user for a valid value.
* calculate(double value, const std::string& unit_origin, const std::string& unit_destiny): Performs the unit conversion.

## About the Use of this Project

This project is not intended for contributions, but you are free to use the code for your own projects. In accordance with the MIT License, you are granted the freedom to use this code for any beneficial purpose.