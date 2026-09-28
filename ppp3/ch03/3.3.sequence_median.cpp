#include "PPPheaders.h"

int main()
  // compute mean and median temperatures
{
  vector<double> temps;             // temperatures
  for (double temp; cin>>temp; )    // read into temp
    temps.push_back(temp);          // put temp into vector

  // compute mean temperature:
  double sum = 0;
  for (double x : temps)
    sum += x;
  cout << "Average temperature: " << sum/temps.size() << '\n';

  // compute median temperature:
  ranges:: sort(temps);   //sort the temperatures
  if (temps.size() % 2 != 0) {
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
  }
  else if (temps.size() % 2 == 0) {
    cout << "Median temperature: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1])/2 << '\n';
  }
  else {
    cout << "cannot enter 0 values";
  }
  return 0;
}
