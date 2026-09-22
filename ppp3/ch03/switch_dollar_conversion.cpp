// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Welcome to the dollar conversion calculator. Following this message, please enter amounts of money you hold in yen ('y'), kroner ('k'), swiss franc ('f'), or pounds ('p') and these will be converted into dollars.\n";
  
  char unit;
  cout << "Please now enter your currency type:\n";
  cin >> unit;

  double unit_amount = 0;
  cout << "Please now enter how much of that currency type you have:\n";
  cin >> unit_amount;

  double dollars = 0;

  switch (unit) {
    case 'y':
      dollars = unit_amount * 0.0064;
      cout << "You have ¥" << unit_amount << " Yen. Converted you will have $" << dollars << " dollars.\n";
      break;
    case 'k':
      dollars = unit_amount * 0.11;
      cout << "You have kr" << unit_amount << " Kroner. Converted you will have $" << dollars << " dollars.\n";
      break;
    case 'p':
      dollars = unit_amount * 1.34;
      cout << "You have £" << unit_amount << " Pounds. Converted you will have $" << dollars << " dollars.\n";
      break;
    case 'f':
      dollars = unit_amount * 1.22;
      cout << "You have ₣" << unit_amount << " Swiss Franc. Converted you will have $" << dollars << " dollars.\n";
      break;
    default:
      cout << "\nI do not know the conversion for that currency type.";
      break;
  }
  return 0;
}
