#include <iostream>
using namespace std;

int main() {
	string sentence;
	int word_num, start_index, end_index, prev_ws = 0, next_ws = 0, count_ws = 0;

	cout << "Enter a sentence: ";
	getline(cin, sentence);
	cout << "Choose a word number: ";
	cin >> word_num;

	for (int i = 0; count_ws != word_num && i < sentence.size(); i++) {
		// If at a space or the end
		if (sentence[i] == ' ' || i == sentence.size() - 1) {
			count_ws++;
			// Update the whitespace trackers
			// The previous becomes the next, next becomes the current index
			prev_ws = next_ws, next_ws = i;
		}
	}

	// *If at the first word, do not add one to the index
	int first_word_inc = word_num != 1;

	// If the white space count is zero, the entire sentence is one word
	// Otherwise take the sub string where the sub string starts at the previous white space plus one*
	// and the length is the next white space index minus the previous white space index
	string word = count_ws == 0 ? sentence : sentence.substr(prev_ws + first_word_inc, next_ws - prev_ws);

	cout << word << endl;

	return 0;
}