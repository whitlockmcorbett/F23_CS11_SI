#include <iostream>
#include <cmath>
#include <iomanip>
// What libraries do you need?
using namespace std;

int main() {
  // Take inputs for A, B, and C

  double a, b, c;

  cout << "Enter a numbers: ";
  cin >> a >> b >> c;


  double x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
  double x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

  cout << fixed << setprecision(3);
  cout << "\nx = " << x1 << " or " << x2 << endl;


  // Use the quadratic formula to calculate the roots 

  // Output the result(s)
  
  // Uncomment when you are ready to output the results
  // cout << "x = " << x1 << " or " << x2 << endl;
  return 0;
}