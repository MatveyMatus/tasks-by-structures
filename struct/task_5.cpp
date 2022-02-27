#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student {
	string Name;
	string Gesture;
	int Wins;
};
int game(string player_1, string player_2) {
	if (player_1 == "stone") {
		if (player_2 == "scissors")
			return 1;
		else if (player_2 == "stone")
			return 0;
		else if (player_2 == "paper")
			return -1;
	}
	if (player_1 == "paper") {
		if (player_2 == "stone")
			return 1;
		else if (player_2 == "paper")
			return 0;
		else if (player_2 == "scissors")
			return -1;
	}
	if (player_1 == "scissors") {
		if (player_2 == "paper")
			return 1;
		else if (player_2 == "scissors")
			return 0;
		else if (player_2 == "stone")
			return -1;
	}
}

int main() {
	int result;
	student masSt[5];
	masSt[0] = { "Mark", "stone", 0 };
	masSt[1] = { "Carl", "paper", 0 };
	masSt[2] = { "Den", "scissors", 0 };
	masSt[3] = { "Georg", "paper", 0 };
	masSt[4] = { "Maks", "stone", 0 };
	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			result = game(masSt[i].Gesture, masSt[j].Gesture);
			if (result == 1) {
				masSt[i].Wins++;
			}
			else if (result == -1) {
				masSt[j].Wins++;
			}
			else {
				continue;
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		cout << i + 1 << ")" << masSt[i].Wins << "-" << masSt[i].Name << endl;
	}
}