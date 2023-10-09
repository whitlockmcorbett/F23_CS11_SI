#include <iostream>
using namespace std;

int main() {
  string str;
  bool pal = true;
  cout << "Enter a word: ";
  cin >> str;

  for (int i = 0, j = str.size() / 2; i < str.size() / 2 && j > str.size() / 2 && pal; i++, j--) {
    cout << "i: " << str[i] << "   j: " << str[j] << endl;
    if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    if (str[j] >= 'A' && str[j] <= 'Z') str[j] += 32;
    if (str[i] <= 'a' || str[i] >= 'z') i++;
    if (str[j] <= 'a' || str[j] >= 'z') j++;
    if (str[i] != str[j]) {
      pal = false;
    }
  }
  cout << boolalpha << pal << endl;
  
  return 0;
}