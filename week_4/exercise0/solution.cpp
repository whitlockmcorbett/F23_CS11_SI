#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	srand(time(0));

	bool has_carrots = rand() % 2;
	bool has_apples = rand() % 2;
	bool has_milk = rand() % 2;
	bool has_bread = rand() % 2;
	bool has_pears = rand() % 2;

	cout << "Getting groceries:" << endl;

	if (has_carrots) {
		cout << "Bought carrots." << endl;
	}
	if (has_apples) {
		cout << "Bought apples." << endl;
	}
	if (has_milk) {
		cout << "Bought milk." << endl;
	}
	if (has_bread) {
		cout << "Bought bread." << endl;
	}
	if (has_pears) {
		cout << "Bought pears." << endl;
	}
	
	cout << endl << "Getting dinner:" << endl;

	bool has_pizza = false; 
	bool has_pasta = false; 
	bool has_salad = false; 
	bool has_soup = false; 

	switch(rand() % 5) {
		case (0):
			has_pizza = true;
		case (1):
			has_pasta = true;
		case (2):
			has_salad = true;
		case (3):
			has_soup = true;
		default:
			;
	}

	if (has_pizza) {
		cout << "Bought pizza." << endl;
	} else if (has_pasta) {
		cout << "Bought pasta." << endl;
	} else if (has_salad) {
		cout << "Bought salad." << endl;
	} else if (has_soup) {
		cout << "Bought soup." << endl;
	} else {
		cout << "Bought whatever they had." << endl;
	}

	return 0;
}
