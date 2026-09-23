// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter a number you want to square:\n";
  int num;
  cin >> num;

  int squared_num = 0;

  for (int i = 0; i < num; i++) {
    squared_num = num + squared_num;
    cout << i << "\t" << squared_num << "\n";
  }


  cout << "Your number squared is: " << squared_num;
}
