#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student {
	int Age;
	string Name;
	string Drink;
};

bool isPrime(int x) {
	for (int i = 2; i <= sqrt(x); ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	student masStudent[3];
	masStudent[0] = { 23, "Tom", "tea" };
	masStudent[1] = { 12, "Rome", "coffee" };
	masStudent[2] = { 20, "Siamon", "rom" };
	for (int j = 0; j < 3; ++j) {
		if (isPrime(masStudent[j].Age)) {
			cout << masStudent[j].Name << " " << masStudent[j].Drink << endl;
		}
	}
}