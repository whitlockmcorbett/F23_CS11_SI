#include <iostream>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0) {
		cout << "First Quadrant" << endl;
	} else if (x < 0 && y > 0) {
		cout << "Second Quadrant" << endl;
	} else if (x < 0 && y < 0) {
		cout << "Third Quadrant" << endl;
	} else if (x > 0 && y < 0) {
		cout << "Fourth Quadrant" << endl;
	} else if (x == 0 && y == 0) {
		cout << "At Origin" << endl;
	} else if (x == 0) {
		cout << "On x-axis" << endl;
	} else { 
		cout << "On y-axis" << endl;
	}

	return 0;
}
