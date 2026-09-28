#include "PPPheaders.h"

int main()
{
  cout << "Please enter a string and I will return each character and its integer value on a line.\n";
  string entered_string;
  cin >> entered_string;

  cout << "Your chosen word is: " << entered_string << "\n";

  for (int i = 0; i < entered_string.size(); i++) {
    char chosen_character = entered_string[0 + i];
    cout << chosen_character << "\t" << int(chosen_character) << "\n";
  }

  return 0;
}
