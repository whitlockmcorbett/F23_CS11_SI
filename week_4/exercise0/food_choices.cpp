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

	// ------------ ONLY WORK ON CODE BELOW -------------

	if (/* Your Code */) {
		cout << "Bought carrots." << endl;
	}
	if (/* Your code */) {
		cout << "Bought apples." << endl;
	}
	if (/* Your code */) {
		cout << "Bought milk." << endl;
	}
	if (/* Your code */) {
		cout << "Bought bread." << endl;
	}
	if (/* Your code */) {
		cout << "Bought pears." << endl;
	}

	// ------------ ONLY WORK ON CODE ABOVE -------------
	
	cout << endl << "Getting dinner:" << endl;

	bool has_pizza = false; 
	bool has_pasta = false; 
	bool has_salad = false; 
	bool has_soup = false; 

	switch(rand() % 4) {
		case (0):
			has_pizza = true;
		case (1):
			has_pasta = true;
		case (2):
			has_salad = true;
		case (3):
			has_soup = true;
	}

	// ------------ ONLY WORK ON CODE BELOW -------------

	if (/* Your code */) {
		cout << "Bought pizza." << endl;
	} else if (/* Your code */) {
		cout << "Bought pasta." << endl;
	} else if (/* Your code */) {
		cout << "Bought salad." << endl;
	} else if (/* Your code */) {
		cout << "Bought soup." << endl;
	} else {
		cout << "Bought whatever they had." << endl;
	}

	// ------------ ONLY WORK ON CODE BELOW -------------
	
	return 0;
}
