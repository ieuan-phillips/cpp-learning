// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Welcome to the dollar conversion calculator. Following this message, please enter amounts of money you hold in yen ('y'), kroner ('k'), or pounds ('p') and these will be converted into dollars.\n";
  
  char unit;
  cout << "Please now enter your currency type or unit:\n";
  cin >> unit;

  double unit_amount = 0;
  cout << "Please now enter how much of that currency type you have:\n";
  cin >> unit_amount;

  double dollars = 0;
  if (unit == 'y') {
    dollars = unit_amount * 0.0064;
    cout << "You have ¥" << unit_amount << " Yen. Converted you will have $" << dollars << " dollars.\n";
  }
  else if (unit == 'k') {
    dollars = unit_amount * 0.11;
    cout << "You have kr" << unit_amount << " Kroner. Converted you will have $" << dollars << " dollars.\n";
  }
  else if (unit == 'p') {
    dollars = unit_amount * 1.34;
    cout << "You have £" << unit_amount << " Pounds. Converted you will have $" << dollars << " dollars.\n";
  }
  else {
    cout << "\nI do not know the conversion for that currency type.";
  }
  return 0;
}
