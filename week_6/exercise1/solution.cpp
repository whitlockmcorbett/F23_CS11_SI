#include<iostream>

using namespace std;

int main() {
	string sequence;
	cin >> sequence;

	int gc = 0;
	int at = 0;
	for (int i = 0; i < sequence.size(); i++) {
		if (sequence[i] == 'G' || sequence[i] == 'C') {
			gc++;
		}
		if (sequence[i] == 'A' || sequence[i] == 'T') {
			at++;
		}
	}
	cout << "Percentage of Gs and Cs: " << (double) gc / (gc+at) << endl;
	return 0;
}
