// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Please enter a some words:\n";
  vector<string> words;
  for(string word; cin>>word; )
    words.push_back(word);

  vector<string> disliked_words = {"Hello","hi","Jeff","Ieuan","ieuan"};

  for (string word : words) {
    for (string disliked_word : disliked_words) {
      if (word == disliked_word) {
        word = "BLEEP\n";
      }
    }
    
    cout << word << '\n';
  }

  return 0;
}
