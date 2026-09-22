// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  for (int i = 0; i < 26 ;++i) {
    char letter = char('a' + i); 
    
    cout << letter << "\t" << int(letter) << "\n";
  }
  for (int i = 0; i < 26 ;++i) {
    char letter = char('A' + i); 
    
    cout << letter << "\t" << int(letter) << "\n";
  }
  for (int i = 0; i < 10 ;++i) {
    char digit = char('0' + i); 
    
    cout << digit << "\t" << int(digit) << "\n";
  }
  return 0;
}
