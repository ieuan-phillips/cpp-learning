#include <PPPheaders.h>

int main ()
// Find the mode of a set of positive integers
{
  vector<int> numbers = {1, 3, 2, 5, 5, 5, 6, 7, 9, 9};
  // vector<int> numbers = {7, 7, 7, 8, 8, 9};
  // vector<int> numbers = {10, 20, 30, 30, 30, 40};
 
  int most_freq_num = numbers[0];
  int freq = 1;
  int highest_freq = 1;
 
  ranges::sort(numbers);

  for (int num = 1; num < numbers.size(); num++) {
    if (numbers[num-1]==numbers[num]) {
      ++freq;
      if (freq > highest_freq) {
        highest_freq = freq;
        most_freq_num = numbers[num];
      }
    }
    else {
      freq = 1;
    }
  }

  cout << most_freq_num << ": is the mode of the integer set.\n";

  return 0;
}
