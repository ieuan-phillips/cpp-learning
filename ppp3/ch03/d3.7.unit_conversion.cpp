
#include "PPPheaders.h"

int main()
{
  double n1;

  cin >> n1;

  double smallest = n1;
  double largest = n1;

  cout << "The value you entered is: " << n1 << '\n';
  cout << "The smallest so far.\n";
  cout << "The largest so far.\n";

  while (cin>>n1) {
    cout << "The value you entered is: " << n1 << '\n';
    if (n1 < smallest) {
      smallest = n1;
      cout << "The smallest so far.\n";
    }
     if (n1 > largest) {
      largest = n1;
      cout << "The largest number so far.\n";
    }
  }
  return 0;
}
