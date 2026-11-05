#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
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
