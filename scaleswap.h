#ifndef SCALESWAP_H
#define SCALESWAP_H

#include <iostream>
#include <map>
#include <string>
#include <limits>

// Function declarations
void errorMessager();
void welcomer();
void mt_selected();
void in_selected();
void asker();
double to_mt(double value, const std::string& unit);
double from_mt(double value, const std::string& unit);
double to_in(double value, const std::string& unit);
double from_in(double value, const std::string& unit);
void display_units(const std::map<std::string, double>& system);
double calculate(double value, const std::string& unit_origin, const std::string& unit_destiny);
std::string getValidU(const std::map<std::string, double>& system);
double getValidV();

extern const std::map<std::string, double> metric_system;
extern const std::map<std::string, double> imperial_system;

#endif