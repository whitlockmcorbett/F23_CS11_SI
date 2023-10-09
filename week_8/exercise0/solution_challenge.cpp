#include <iostream>
using namespace std;

int main() {
  string str;
  bool pal = true;

  cout << "Enter a word: ";
  getline(cin, str);

  for(int i = str.size() -1, j = 0; i >= str.size()/2 && j < str.size()/2 && pal; i--, j++) { 
    while (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z')) i--; // Increment while not a letter
    while (!(str[j] >= 'A' && str[j] <= 'Z') && !(str[j] >= 'a' && str[j] <= 'z')) j++; // Increment while not a letter
    if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32; // if capital, make lower 
    if (str[j] >= 'A' && str[j] <= 'Z') str[j] += 32; // if capital, make lower
    pal = str[i] == str[j];
  }
  cout << boolalpha << pal << endl;
  
  return 0;
}