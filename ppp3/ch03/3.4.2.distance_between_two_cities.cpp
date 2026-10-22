#include "PPPheaders.h"

int main()
  // compute smallest, largest, mean and total distances
{
  cout << "Please enter the distance between the cities you have in mind (km): \n";
  vector<double> cities_dist;             // cities distances
  for (double city; cin>>city; )    // read into cities
    cities_dist.push_back(city);          // put temp into vector

  double largest_dist = 0;
  double smallest_dist = 0;
  double measurement = 0;
  double measurement_sum = 0;
  int x = 1;

  measurement = cities_dist[x]-cities_dist[x-1];
  measurement_sum += measurement;
  smallest_dist = measurement;
  largest_dist = measurement;
  for (int i = 2; i<cities_dist.size(); ++i) {
    measurement = cities_dist[i]-cities_dist[i-1];
    measurement_sum += measurement;
    if (measurement < smallest_dist) {
      smallest_dist = measurement;
    }
    if (measurement > largest_dist) {
      largest_dist = measurement;
    }
  }

  cout << "Total distance between cities: " << measurement_sum << "km \n";
  cout << "Smallest distance between two cities: " << smallest_dist << "km \n";
  cout << "Largest distance between two cities: " << largest_dist << "km \n";
  cout << "Average/mean distance: " << measurement_sum/(cities_dist.size() - 1) << "km\n";
  
  return 0;
}
