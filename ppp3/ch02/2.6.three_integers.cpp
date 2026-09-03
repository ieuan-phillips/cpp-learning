// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter 3 integer values\n";
  int val1 = 0;
  int val2 = 0;
  int val3 = 0;
  double smallest;
  double middle;
  double largest;
  cin >> val1 >> val2 >> val3;
  cout << "Your values are: " << val1 << ", " << val2 << ", " << val3;
  
  // smallest
  if (val1 <= val2 and val1 <= val3) {
    smallest = val1;
  }
  if (val2 <= val1 and val2 <= val3) {
    smallest = val2;
  }
  if (val3 <= val1 and val3 <= val2) {
    smallest = val3;
  }
  cout << "\nThe smallest value is: " << smallest;

  // largest
  if (val1 >= val2 and val1 >= val3) {
    largest = val1;
  }
  if (val2 >= val1 and val2 >= val3) {
    largest = val2;
  }
  if (val3 >= val1 and val3 >= val2) {
    largest = val3;
  }
  cout << "\nThe largest value is: " << largest;

  // middle
  if (smallest == val2 and largest == val3) {
    middle = val1;
  }
  else if (smallest == val3 and largest == val2) {
    middle = val1;
  }
  else if (smallest == val1 and largest == val3) {
    middle = val2;
  }
  else if (smallest == val3 and largest == val1) {
    middle = val2;
  }
  else if (smallest == val1 and largest == val2) {
    middle = val3;
  }
  else if (smallest == val2 and largest == val1) {
    middle = val3;
  }
  cout << "\nYour numbers in sequence: " << smallest << ", " << middle << ", " << largest;
  return 0;
}
