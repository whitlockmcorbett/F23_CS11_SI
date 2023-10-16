#include <iostream>
using namespace std;

int main() {
  int n;
  bool prime;

  cout << "Enter an integer n: ";
  cin >> n;

  cout << 2 << " ";
  for (int i = 3; i <= n; i+=2) {
    prime = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        prime = false;
        break;
      }
    }
    if (prime) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}