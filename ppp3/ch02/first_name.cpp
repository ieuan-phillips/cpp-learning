// This program outputs the message "Hello, World!" to the monitor

// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter your first name (followed by 'enter'):\n"; // output
  string first_name;
  cin >> first_name;
  cout << "Hello, " << first_name << "!\n";
}
