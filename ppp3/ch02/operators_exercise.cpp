// This program outputs the message "Hello, World!" to the monitor

// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter a interger value: ";
  int n = 0;
  cin >> n;
  cout << "n == " << n
       << "\nn+1 == " << n+1
       << "\nthree times n == " << 3*n
       << "\ntwice n == " << n+n
       << "\nn squared == " << n*n
       << "\nhalf of n == " << n/2
       << "\nsquare root of n == " << sqrt(n)
       << "\nmodulo of n == " << n%2
       << '\n';
}
