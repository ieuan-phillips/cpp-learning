#include "PPPheaders.h"

int main()
{
  int n1;
  int n2;
  while (cin>>n1>>n2) {
    if (n1<n2) {
      cout << "The smaller value is: " << n1 << "\tThe larger value is: " << n2 << "\n";
    }
    else if (n2<n1) {
      cout << "The smaller value is: " << n2 << "\tThe larger value is: " << n1 << "\n";
    }
    else {
      cout << "I could not compare your values.\n";
    }
  }
  return 0;
}
