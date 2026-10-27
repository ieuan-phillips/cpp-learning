#include "PPPheaders.h"

int main()
// How many grains of rice on each square of a chess board if the number of rice doubled each square.
{
int rice = 1;
int total_rice = 0;
bool reached_1000 = false;
bool reached_1000000 = false;
bool reached_1000000000 = false;

  for (int square = 1; square < 65; square++) {
    total_rice += rice;
    cout << "Square " << square << ": " << rice << " grains, total " << total_rice << "\n";
    if (total_rice >= 1000 && reached_1000 == false) {
      reached_1000 = true;
      cout << "1000 grains of rice was reached at square " << square << "\n";
    }
    if (total_rice >= 1000000 && reached_1000000 == false) {
      reached_1000000 = true;
      cout << "1000000 grains of rice was reached at square " << square << "\n";
    }
    if (total_rice >= 1000000000 && reached_1000000000 == false) {
      reached_1000000000 = true;
      cout << "1000000000 grains of rice was reached at square " << square << "\n";
    }
    rice *= 2;
  }
  return 0;
}
