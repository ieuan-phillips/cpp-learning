#include <PPPheaders.h>

int main ()
// Find the min, max and mode of a sequence of strings
{
  // vector<string> words= {"a", "man", "a", "plan", "a", "canal", "panama"};
  vector<string> words= {"zebra", "apple", "dog", "apple", "cat", "dog", "dog"};
 
  string most_freq_word = words[0];
  int freq = 1;
  int highest_freq = 1;
 
  ranges::sort(words);

  string min = words[0];
  string max = words[words.size() - 1];

  for (int word = 1; word < words.size(); word++) {
    if (words[word-1]==words[word]) {
      ++freq;
      if (freq > highest_freq) {
        highest_freq = freq;
        most_freq_word = words[word];
      }
    }
    else {
      freq = 1;
    }
  }

  cout << min << ": is the min of the string sequence.\n";
  cout << max << ": is the max of the string sequence.\n";
  cout << most_freq_word << ": is the mode of the string sequence.\n";

  return 0;
}
