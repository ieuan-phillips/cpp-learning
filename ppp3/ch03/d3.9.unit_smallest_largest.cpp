#include "PPPheaders.h"

int main()
{
  double length;
  string unit;
  
  while (cin >> length >> unit) {
    double smallest = length;
    double largest = length;
    double sum;
    sum = length + sum;
    cout << "The value you entered is: " << length << unit << '\n';
    if (unit == "cm") {
      cout << "Converted into meters = " << length/100 << "m\n";
    }
    else if (unit == "m") {
      cout << "Converted into centimeters = " << length*100 << "cm\n";
    }
    else if (unit == "in") {
      cout << "Converted into centimeters = " << length*2.54 << "cm\n";
    }
    else if (unit == "ft") {
      cout << "Converted into inches = " << length*12 << "in\n";
    }
    else {
      cout << "I do not know that conversion\n";
    }
    cout << "The smallest length entered was: " << smallest << "\n";
    cout << "The largest length entered was: " << largest << "\n";
  }
  return 0;
}
