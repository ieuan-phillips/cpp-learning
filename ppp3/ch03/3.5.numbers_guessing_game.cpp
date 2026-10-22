#include "PPPheaders.h"

int main()
  // Numbers Guessing Game. Think of a number and the program asks questions to figure out what the number is in less than seven questions.
{
  cout << "Please think of a number between 1 and 100 and the program will figure out your number in 7 questions. Answer 'y' or 'n' to the following: \n";
  
  int low = 1;
  int high = 100;
  int middle;
  char answer;
  
  while (low < high) {
    middle = low + (high - low) / 2;
    cout << "Is your number less than or equal to " << middle << "?\n";
    cin >> answer;
    if (answer == 'y') {
      high = middle;
    }
    else {
      low = middle + 1;
    }
  }
  cout << "Your number is " << high << "!\n";

  return 0;
}
