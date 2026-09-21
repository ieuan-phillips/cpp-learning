// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter the calculation you would like to make, beginning with the operation followed by two numbers. e.g. '+, 120, 100'\n";
  string operation;
  double n1;
  double n2;
  double output;
  cin >> operation;
  cin >> n1;
  cin >> n2;
  if (operation == "+" or operation == "plus"){
    output = n1 + n2;
    cout << "The calculation you have entered: " << n1 << " " << operation << " " << n2 << "\n";
    cout << "The output of your calculation is: " << output;
  }
  if (operation == "-" or operation == "minus"){
    output = n1 - n2;
    cout << "The calculation you have entered: " << n1 << " " << operation << " " << n2 << "\n";
    cout << "The output of your calculation is: " << output;
  }
  if (operation == "*" or operation == "mul"){
    output = n1 * n2;
    cout << "The calculation you have entered: " << n1 << " " << operation << " " << n2 << "\n";
    cout << "The output of your calculation is: " << output;
  }
  if (operation == "/" or operation == "div"){
    output = n1 / n2;
    cout << "The calculation you have entered: " << n1 << " " << operation << " " << n2 << "\n";
    cout << "The output of your calculation is: " << output;
  }
  return 0;
}
