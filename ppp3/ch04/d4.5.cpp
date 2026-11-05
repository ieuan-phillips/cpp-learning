#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    return 0;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
  }
