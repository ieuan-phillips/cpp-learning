// This program outputs the message "Hello, World!" to the monitor

//import std; // gain access to the C++ standard library

#include "PPPheaders.h"
//#include "PPP_support.h"

int main() // C++ programs start by executing the function main
{
  cout << "Enter the name of the person you want to write to (followed by 'enter'):\n"; // output
  string first_name;
  cin >> first_name;
  cout << "Enter the name of a friend:\n"; // output
  string friend_name;
  cin >> friend_name;
  cout << "Enter the age of the person you are writing to:\n"; // output
  int age;
  cin >> age;
  if (age <= 0 or age >= 110){
    error("you're kidding!");
  }

  cout << "\nDear " << first_name << ",\n\n";
  cout << "   How are you? I am fine. I miss you.\n";
  cout << "   Have you seen " << friend_name << " lately?\n";
  cout << "   I hear you just had a birthday and you are " << age << " years old.\n";
  if (age < 12) {
    cout << "   Next year you will be " << age+1 << "!\n";
  }
  if (age == 17) {
   cout << "   Next year you will be able to vote.\n";
  }
  if (age > 70) {
   cout << "   Are you retired?\n";
  }

  cout << "\nYours sincerely,\n\nIeuan P";
}
