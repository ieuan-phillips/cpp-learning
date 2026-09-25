
#include "PPPheaders.h"

int main()
{
  double n1;
  string unit;
  double sum = 0;

  cin >> n1 >> unit;

  while (unit != "cm"
    && unit != "m"
    && unit != "in"
    && unit != "ft") {

    cout << "I do not know that unit type.\n";

    cin >> n1 >> unit;
  }

  double value_in_meters;

  if (unit == "cm") {
    value_in_meters = n1 / 100;
  }

  else if (unit == "m") {
    value_in_meters = n1;
  }

  else if (unit == "in") {
    value_in_meters = (n1 * 2.54) / 100;
  }

  else if (unit == "ft") {
    value_in_meters = n1 * 12 * 2.54 / 100;
  }

  else {
    cout << "I do not know that unit type.\n";
  }

  double smallest = value_in_meters;
  double largest = value_in_meters;

  cout << "The value you entered is: " << n1 << unit << '\n';
  cout << "Converted into meters is: " << value_in_meters << 'm' << '\n';

  while (cin>>n1>>unit) {
    cout << "The value you entered is: " << n1 << unit << '\n';
    sum = value_in_meters + sum;
    if (unit == "cm") {
      value_in_meters = n1 / 100;
      cout << "Converted into meters is: " << value_in_meters << "m\n";
    }
    else if (unit == "m") {
      value_in_meters = n1;
      cout << "Converted into meters is: " << value_in_meters << "m\n";
    }
    else if (unit == "in") {
      value_in_meters  = (n1 * 2.54) / 100;
      cout << "Converted into meters is: " << value_in_meters << "m\n";
    }
    else if (unit == "ft") {
      value_in_meters = n1 * 12 * 2.54 / 100;
      cout << "Converted into meters is: " << value_in_meters << "m\n";
    }
    else {
      cout << "I do not know that unit type.\n";
    }

    if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft") {

      if (value_in_meters < smallest) {
          smallest = value_in_meters;
          cout << "The smallest so far.\n";
      }

      if (value_in_meters > largest) {
          largest = value_in_meters;
          cout << "The largest number so far.\n";
      }
    }
  }
  cout << "The smallest value was: " << smallest << "m\n";
  cout << "The largest value was: " << largest << "m\n";
  cout << "The number of values entered was: " << sum << "\n";
  cout << "The total sum in meters: " << sum << "m\n";

  return 0;
}
