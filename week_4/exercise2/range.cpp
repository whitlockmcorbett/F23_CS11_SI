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
        //-------------------- YOUR CODE BELOW -------------------------
	

	if (in_bound) {
		cout << target << " falls between " << bound1 << " and " << bound2 << endl;
	} else {
		cout << target << " does not fall between " << bound1 << " and " << bound2 << endl;
	}
	return 0;
}
