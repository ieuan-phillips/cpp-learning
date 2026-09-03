// This program outputs the message "Hello, World!" to the monitor

// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  string previous;
  string current;
  while (cin>>current) {
    if (previous == current)
      cout << "repeated word: " << current << '\n';
    previous = current;
  }
}
