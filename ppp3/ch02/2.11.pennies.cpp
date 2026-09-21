// import std; // gain access to the C++ standard library

#include "PPPheaders.h"

int main() // C++ programs start by executing the function main
{
  cout << "Welcome to the change calculator. Following this message, please enter the corrosponding amounts of change you hold.\n";
  int pennies;
  int nickels;
  int dimes;
  int quarters;
  int halfdollars;
  int dollars;
  double total;
  cout << "Now please enter the number of pennies:\n";
  cin >> pennies;
  cout << "Now please enter the number of nickels:\n";
  cin >> nickels;
  cout << "Now please enter the number of dimes:\n";
  cin >> dimes;
  cout << "Now please enter the number of quarters:\n";
  cin >> quarters;
  cout << "Now please enter the number of half dollars:\n";
  cin >> halfdollars;
  cout << "Now please enter the number of dollars:\n";
  cin >> dollars;

  if (pennies == 1) {
    cout << "\nYou have " << pennies << " penny.\n";
  }
  else {
    cout << "You have " << pennies << " pennies.\n";
  }
  if (nickels == 1) {
    cout <<"You have " << nickels << " nickel.\n";
  }
  else {
    cout << "You have " << nickels << " nickels.\n";
  }
  if (dimes == 1) {
    cout <<"You have " << dimes << " dime.\n";
  }
  else {
    cout << "You have " << dimes << " dimes.\n";
  }
  if (quarters == 1) {
    cout << "You have " << quarters << " quarter.\n";
  }
  else {
    cout << "You have " << quarters << " quarters.\n";
  }
  if (halfdollars == 1) {
    cout << "You have " << halfdollars << " half dollar.\n";
  }
  else {
    cout << "You have " << halfdollars << " half dollars.\n";
  }
  if (dollars == 1) {
    cout << "You have " << dollars << " dollar.\n";
  }
  else {
    cout << "You have " << dollars << " dollars.\n";
  }

  nickels = nickels * 5;
  dimes = dimes * 10;
  quarters = quarters * 25;
  halfdollars = halfdollars * 50;
  dollars = dollars * 100;

  
  total = pennies + nickels + dimes + quarters + halfdollars + dollars;
  
  double totaldollars;
  totaldollars = total / 100;

  cout << "The value of all of your coins is " << total << " pennies.\n";
  cout << "The value of all of your coins in dollars is $" << totaldollars << " dollars.\n";
  return 0;
}
