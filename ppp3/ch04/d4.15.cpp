#include "PPPheaders.h"

int main()
// Commenting out drill code, fixed code is uncommented below drill code.
  try {
    // string s = "Success!\n"; for (int i = 0; i<6; ++i) cout<<s[i];
    string s = "Success!\n"; for (int i = 0; i<s.size(); ++i) cout<<s[i];
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
