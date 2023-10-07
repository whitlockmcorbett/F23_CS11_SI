#include <iostream>
using namespace std;

int main () {
  string word, word_out;
  int word_num = 0;
  
  cout << "Choose a word number: ";
  cin >> word_num;

  cout << "Enter a sentence: ";
  for (int i = 0; cin >> word; i++) {
    if (i == word_num) word_out = word;
  }
  cout << word_out << endl;

  return 0;
}