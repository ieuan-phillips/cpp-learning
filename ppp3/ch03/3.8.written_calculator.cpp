#include "PPPheaders.h"

int main()
  // Simple calculator. Enter two numbers and an operation to recieve the calculation.
{
  vector<string> spelled_digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  
  string num1;
  int value1;
  string num2;
  int value2;
  char symbol;
  double answer;

  cout << "Please enter your first number: \n";
  cin>>num1;
  
  if (num1.size() == 1 && num1[0] >= '0' && num1[0] <= '9') {
    value1 = num1[0] - '0';
  }
  else {
    bool found = false;
    for (int i = 0; i < spelled_digits.size(); i++) {
      if (num1 == spelled_digits[i]) {
        value1 = i;
        found = true;
      }
    }
    if (!found) {
      cout << "Invalid input.\n";
      return 1;
    }
  }

  cout << "Please enter your second number: \n";
  cin>>num2;

  if (num2.size() == 1 && num2[0] >= '0' && num2[0] <= '9') {
    value2 = num2[0] - '0';
  }
  else {
    bool found = false;
    for (int i = 0; i < spelled_digits.size(); i++) {
      if (num2 == spelled_digits[i]) {
        value2 = i;
        found = true;
      }
    }
    if (!found) {
      cout << "Invalid input.\n";
      return 1;
    }
  }
  
  cout << "Please enter your operator (e.g. '+', '-', '*', '/'): \n";
  cin>>symbol;

  if (symbol == '+') {
    answer = value1 + value2;
  }
  else if (symbol == '-') {
    answer = value1 - value2;
  }
  else if (symbol == '*') {
    answer = value1 * value2;
  }
  else if (symbol == '/') {
    if (value2 == 0) {
      cout << "Cannot divide by zero.\n";
      return 1;
    }
    answer = double(value1) / value2;
  }
  else {
    cout << "Please enter a valid calculation.\n";
    return 1;
  }

  cout << "The answer to your calculation is: " << answer << "\n";
  return 0;
}
