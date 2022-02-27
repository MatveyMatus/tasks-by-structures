#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
	int Age;
	string Name;
	string Drink;
};

int main() {
	int max = 0;
	student masStudent[3];
	vector<int> studAge(3);
	cout << "Name/Age/Drink" << endl;
	for (int i = 0; i < 3; i++) {
		cin >> masStudent->Name >> masStudent->Age >> masStudent->Drink;
		studAge[i] = masStudent->Age;
	}
	max = -1;
	for (int i = 0; i < studAge.size(); i++) {
		if (studAge[i] > max)
			max = studAge[i];
	}
	cout << max;
}