 / This program outputs the message "Hello, World!" to the monitor

// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Welcome to the miles to kilometers converter!\n"; // output
  cout << "Please enter the number of miles of your trip (followed by 'ENTER'):\n"; // output
  double miles = 0;
  cin >> miles;
  double miles_converstion = miles * 1.609;
  cout << "Your trip will be " << miles << " miles. \nMaking your trip: " << miles_converstion << " kilometers long!\n";
}
