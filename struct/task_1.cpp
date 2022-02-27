#include <iostream>
#include <string>

using namespace std;

struct student {
	int Age;
	string Name;
	string Drink;
};

int main() {
	student masSt[3];
	masSt[0] = { 22, "Mark", "coffee" };
	masSt[1] = { 32, "Maks", "tea" };
	masSt[2] = { 23, "Den", "white Tea" };
	for (int i = 0; i < 3; ++i) {
		cout << masSt[i].Name << " " << masSt[i].Age << " " << masSt[i].Drink << endl;

	}
}