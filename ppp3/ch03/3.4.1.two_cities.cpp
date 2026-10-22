#include "PPPheaders.h"

int main()
  // compute smallest, largest, mean and total distances
{
  cout << "Please enter the distance between the cities you have in mind (km): \n";
  vector<double> cities_dist;             // cities distances
  for (double city; cin>>city; ) {        // read into cities
    cities_dist.push_back(city);          // put temp into vector
  }

  double sum = 0;
  for (double x : cities_dist) {
    sum += x;
  }

  cout << "The sum of all the distances is: " << sum << "km\n";

  double smallest = cities_dist[0];
  double largest = cities_dist[0];

  for (auto i = 1; i < cities_dist.size(); i++) {
    if (cities_dist[i] < smallest) {
      smallest = cities_dist[i];
    }
    if (cities_dist[i] > largest) {
      largest = cities_dist[i];
    }
  }

  cout << "The smallest distance is: " << smallest << "km\n";
  cout << "The largest distance is: " << largest << "km\n";
  cout << "The average/mean distance is: " << sum/cities_dist.size() << "km\n";
  return 0;
}
