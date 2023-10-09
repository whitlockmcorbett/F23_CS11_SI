#include <iostream>

using namespace std;

int main() {
	const int CHAR_NUM_OFFSET = 48;
	string score;
	int points = 0;
	int total_goals = 0;
	while (cin >> score) {
		int home = score[0];
		int away = score[2];
		if (home > away) {
			points += 3;
		} else if (home == away) {
			points++;
		}
		total_goals += home - CHAR_NUM_OFFSET;
	}
	cout << "Playoff points: " << points << endl;
	cout << "Total goals: " << total_goals << endl;
	return 0;
}
