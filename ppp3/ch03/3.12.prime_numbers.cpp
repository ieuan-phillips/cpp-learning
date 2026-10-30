#include "PPPheaders.h"

int main() 
// find all prime numbers between 1 and 100.
{
  vector<int> primes = {2, 3, 5};
  
  for (int num = 6; num < 101; num++) {
    bool is_prime = true;
    for (int i = 0; i < primes.size(); i++) {
      if (num % primes[i] == 0) {
        is_prime = false;
        break;
      }
    }
    if (is_prime == true) {
      primes.push_back(num);
    }
  }

  for (int x : primes) {
    cout << x << ": is a prime number!\n";
  }

  return 0;
}
