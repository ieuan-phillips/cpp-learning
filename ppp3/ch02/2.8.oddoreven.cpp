// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter an integer value\n";
  int val1 = 0;
  cin >> val1;
  if (val1 % 2 == 0){
  cout << "\nThe value " << val1 << " is an even number.";
  }
  else{
    cout << "\nThe value " << val1 << " is an odd number.";
  }
  return 0;
}
