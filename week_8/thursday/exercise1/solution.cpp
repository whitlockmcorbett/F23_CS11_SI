#include <iostream>
using namespace std;

int main() {
  string str;
  bool pal = true;
  cout << "Enter a word: ";
  cin >> str;

  for (int i = 0; pal && i < str.size() / 2; i++) {
    if (str[i] != str[str.size() - i - 1]) {
      pal = false;
    }
  }
  cout << boolalpha << pal << endl;
  
  return 0;
}