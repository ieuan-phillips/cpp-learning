#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
    int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
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
