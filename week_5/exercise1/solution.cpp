#include<iostream>

using namespace std;

int main() {
	string phone; 
	cin >> phone;
	cout << "(" << phone.substr(0, 3) << ") ";
	cout << phone.substr(3, 3) << "-" << phone.substr(6, 4) << endl;
	return 0;
}
