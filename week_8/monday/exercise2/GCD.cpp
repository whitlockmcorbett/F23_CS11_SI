#include <iostream>
using namespace std;

int main() {
  int a, b, r;
  
  cout << "Enter a number a: ";
  cin >> a;
  cout << "Enter a number b: ";
  cin >> b;

  int A = a, B = b;

  while(a % b > 0) {
    r = a % b;
    a = b;
    b = r;
  }

  cout << "The GCD of " << A << " and " << B << " is " << b << endl;

  return 0;
}