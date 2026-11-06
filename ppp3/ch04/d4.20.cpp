#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // int i = 0; int j = 9; while (i<10) ++j; if(j<i) cout << "Success!\n";
    int i = 0; int j = 9; while (i<10) ++i; if(j<i) cout << "Success!\n";
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
