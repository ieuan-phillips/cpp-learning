// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter a written number value e.g. 'zero', 'one', 'etc...'\n";
  string n0 = "zero";
  string n1 = "one";
  string n2 = "two";
  string n3 = "three";
  string n4 = "four";
  string ninput;
  cin >> ninput;
  if (ninput == n0){
  cout << "\nThe written number: " << ninput << " is the digit: 0";
  }
  if (ninput == n1){
    cout << "\nThe written number: " << ninput << " is the digit: 1";
  }
  if (ninput == n2){
    cout << "\nThe written number: " << ninput << " is the digit: 2";
  }
  if (ninput == n3){
    cout << "\nThe written number: " << ninput << " is the digit: 3";
  }
  if (ninput == n4){
    cout << "\nThe written number: " << ninput << " is the digit: 4";
  }
  else {
    cout << "\nI do not know that number!";
  }
  return 0;
}
