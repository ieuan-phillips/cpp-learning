// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter 2 floating point values\n";
  double val1 = 0;
  double val2 = 0;
  cin >> val1;
  cin >> val2;
  cout << "Your values are: " << val1 << " and: " << val2;
  if (val1 < val2){
  cout << "\nYour first value " << val1 << " is smaller than your second value " << val2;
  }
  else{
    cout << "\nYour second value " << val2 << " is smaller than your first value " << val1;
  }
  if (val1 > val2){
  cout << "\nYour first value " << val1 << " is larger than your second value " << val2;
  }
  else{
    cout << "\nYour second value " << val2 << " is larger than your first value " << val1;
  }
  cout << "\nThe sum of your values is: " << val1 + val2;
  if (val1 < val2){
  cout << "\nThe difference in your values is: " << val2 - val1;
  }
  else{
  cout << "\nThe difference in your values is: " << val1 - val2;
  }
  cout << "\nThe product of your values is: " << val1 * val2;
  if (val1 < val2){
  cout << "\nThe ratio of your values is: " << val2 / val1;
  }
  else{
  cout << "\nThe ratio your values is: " << val1 / val2;
  }
  return 0;
}
