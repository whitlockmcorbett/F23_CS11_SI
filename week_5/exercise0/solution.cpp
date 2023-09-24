#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c, x1, x2;

  cout << "Enter a value for a: ";
  cin >> a;
  cout << "Enter a value for b: ";
  cin >> b;
  cout << "Enter a value for c: ";
  cin >> c;

  x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  cout << fixed << setprecision(3);
  cout << "\nx = " << x1 << " or " << x2 << endl;
  return 0;
}