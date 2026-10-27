#include "PPPheaders.h"

int main()
  // Convert digits to spelled out values and vice versa.
{
  vector<string> spelled_digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  cout << "Enter a digit (0-9) or a number written as a word (zero-nine):\n";
  
  string input;
  while (cin >> input) {
    if (input.size() == 1 && input[0] >= '0' && input[0] <= '9') {
      int digit = input[0] - '0';
      cout << spelled_digits[digit] << "\n";
    }
    else {
      bool found = false;

      for (int i = 0; i < spelled_digits.size(); i++) {
        if (input == spelled_digits[i]) {
          cout << i << '\n';
          found = true;
        }
      }
      if (!found) {
        cout << "Invalid input.\n";
      }
    }
  }
}
