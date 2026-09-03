// This program outputs the message "Hello, World!" to the monitor

// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter your first name and age:\n"; // output
  string first_name = "???";
  double age = -1;
  cin >> first_name >> age;
  double age_months = age * 12;
  cout << "Hello, " << first_name << " (age in months: " << age_months << " months old)\n";
}
