// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter 3 strings:\n";
  string str1;
  string str2;
  string str3;
  string smallest;
  string middle;
  string largest;
  cin >> str1 >> str2 >> str3;
  cout << "Your strings are: " << str1 << ", " << str2 << ", " << str3;
  
  // smallest
  if (str1 <= str2 and str1 <= str3) {
    smallest = str1;
  }
  if (str2 <= str1 and str2 <= str3) {
    smallest = str2;
  }
  if (str3 <= str1 and str3 <= str2) {
    smallest = str3;
  }
  cout << "\nThe first string in sequence is: " << smallest;

  // largest
  if (str1 >= str2 and str1 >= str3) {
    largest = str1;
  }
  if (str2 >= str1 and str2 >= str3) {
    largest = str2;
  }
  if (str3 >= str1 and str3 >= str2) {
    largest = str3;
  }
  cout << "\nThe final string in the sequence is: " << largest;

  // middle
  if (smallest == str2 and largest == str3) {
    middle = str1;
  }
  else if (smallest == str3 and largest == str2) {
    middle = str1;
  }
  else if (smallest == str1 and largest == str3) {
    middle = str2;
  }
  else if (smallest == str3 and largest == str1) {
    middle = str2;
  }
  else if (smallest == str1 and largest == str2) {
    middle = str3;
  }
  else if (smallest == str2 and largest == str1) {
    middle = str3;
  }
  cout << "\nYour strings in sequence: " << smallest << ", " << middle << ", " << largest;
  return 0;
}
