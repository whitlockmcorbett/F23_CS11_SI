#include <iostream>
using namespace std;

int main() {
	string sentence;
	int word_num, start_index, end_index, ws_count = 0;
	cout << "Enter a sentence: ";
	getline(cin, sentence);
	cin >> ws;
	cout << "Choose a word number:";
	cin >> word_num;

	if (word_num == 1) {
		start_index = 0;
	} else {
		int i = 1;
		while(ws_count < word_num - 1) {
			if (sentence[i] == ' ') {
				ws_count++;
			}
			i++;
		}
		start_index = i;
	}
	
	return 0;
}
