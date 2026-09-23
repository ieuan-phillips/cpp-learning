#include "PPPheaders.h"

int main()
{
  double n1;
  double n2;
  while (cin>>n1>>n2) {
    if (n1<n2) {
      cout << "The smaller value is: " << n1 << "\tThe larger value is: " << n2 << "\n";
      if (n2 - n1 < 1.0/100) {
        cout << "The numbers are almost equal.\n";
      }
    }
    else if (n2<n1) {
      cout << "The smaller value is: " << n2 << "\tThe larger value is: " << n1 << "\n";
      if (n1 - n2 < 1.0/100) {
        cout << "The numbers are almost equal.\n";
      }
    }
    else if (n1==n2) {
      cout << "The numbers are equal.\n";
    }
    else {
      cout << "I could not compare your values.\n";
    }
  }
  return 0;
}
