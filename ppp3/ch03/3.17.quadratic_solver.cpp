#include <PPPheaders.h>

double square(double x) 
// return the square of x
{
  return x*x;
}

int main ()
// Quadratic Equation Solver. Enter a, b, and c to receive the two solutions to the quadratic equation, x1 and x2.
{
  cout << "Please enter 3 values from the quadratic you would like to solve, a, b, and c.\n";

  double a;
  double b;
  double c;

  cout << "Please enter a:\n";
  cin >> a;

  if (a == 0) {
    cout << "Please enter a none zero value for a.\n";
    return 1;
  }

  cout << "Please enter b:\n";
  cin >> b;
  cout << "Please enter c:\n";
  cin >> c;

  double x1;
  double x2;
  double discriminant = square(b) - 4 * (a * c);

  if (discriminant < 0) {
    cout << "This equation has no real solutions.\n";
    return 0;
  }

  x1 = (- (b) + sqrt(discriminant)) / (2 * a);
  x2 = (- (b) - sqrt(discriminant)) / (2 * a);

  cout << "Solution 1 to your equation is: " << x1 << "\n";
  cout << "Solution 2 to your equation is: " << x2 << "\n";

  return 0;
}
