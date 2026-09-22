// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  int i = 0;
  
  while (i < 26) {
    char letter = char('a' + i);

    cout << letter << "\t" << int(letter) << "\n";
    ++i;
  }
  return 0;
}
