#include <iostream>

using namespace std;

int main() {
	int bound1;
	cout << "Enter the first bound: ";
	cin >> bound1;

	int bound2;
	cout << "Enter the second bound: ";
	cin >> bound2;

	int target;
	cout << "Enter the target integer: ";
	cin >> target;

	bool in_bound; // set in_bound to true if the target is between numbers, false otherwise

        //-------------------- YOUR CODE BELOW -------------------------
	
	if (bound1 > bound2) {
		if (target < bound1 && target > bound2) {
			in_bound = true;
		} else {
			in_bound = false;
		}
	} else if (bound1 < bound2) {
		if (target < bound2 && target > bound1) {
			in_bound = true;
		} else {
			in_bound = false;
		}
	} else {
		in_bound = false;
	}

        //-------------------- YOUR CODE BELOW -------------------------
	

	if (in_bound) {
		cout << target << " falls between " << bound1 << " and " << bound2 << endl;
	} else {
		cout << target << " does not fall between " << bound1 << " and " << bound2 << endl;
	}

	return 0;
}
