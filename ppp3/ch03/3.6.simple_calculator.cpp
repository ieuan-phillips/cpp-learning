#include "PPPheaders.h"

int main()
  // Simple calculator. Enter two numbers and an operation to recieve the calculation.
{
  double num1;
  double num2;
  char symbol;
  double answer;

  cout << "Please enter your first number: \n";
  cin>>num1;
  
  cout << "Please enter your second number: \n";
  cin>>num2;

  cout << "Please enter your operator (e.g. '+', '-', '*', '/'): \n";
  cin>>symbol;

  if (symbol == '+') {
    answer = num1 + num2;
  }
  else if (symbol == '-') {
    answer = num1 - num2;
  }
  else if (symbol == '*') {
    answer = num1 * num2;
  }
  else if (symbol == '/') {
    if (num2 == 0) {
      cout << "Cannot divide by zero.\n";
      return 1;
    }
    answer = num1 / num2;
  }
  else {
    cout << "Please enter a valid calculation.\n";
    return 1;
  }

  cout << "The answer to your calculation is: " << answer << "\n";
  return 0;
}
