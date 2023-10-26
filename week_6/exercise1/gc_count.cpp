#include <iostream>
using namespace std;

int main () {
	string sequence;
	int at = 0, gc = 0;
	cin >> sequence;

	for(int i = 0; i < sequence.size(); i++) {
		if (sequence[i] == 'A' || sequence[i] == 'T') at++;
		else if (sequence[i] == 'G' || sequence[i] == 'C') gc++;
	}

	cout << "GC content " << (double)gc / (gc + at) << "%" << endl;

	return 0;
}