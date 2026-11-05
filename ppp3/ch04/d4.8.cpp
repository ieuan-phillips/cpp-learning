#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
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
