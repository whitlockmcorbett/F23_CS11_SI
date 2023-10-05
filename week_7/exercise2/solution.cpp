#include <iostream>

using namespace std;

int main() {
	int father, son;
	cin >> father >> son;
	int age = 2 * (father - son) - father;
	if (age > 0) {
		cout << age;
		cout << " years ago." << endl;
	} else if (age < 0) {
		cout << -age;
		cout << " years from now." << endl;
	} else {
		cout << "Currently same age." << endl;
	}
	return 0;
}
