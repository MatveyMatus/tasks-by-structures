#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

struct student {
	int Age;
	string Name;
	string Drink;
};

string reversStr(string& x) {
	int k = 0;
	string result = "";
	for (int i = x.length() - 1; i >= 0; --i) {
		result += x[i];
	}
	return result;
}

int main() {
	student masSt[3];
	vector<string> Names(3);
	masSt[0] = { 23, "Tom", "tea" };
	masSt[1] = { 12, "Rome", "coffee" };
	masSt[2] = { 20, "Siamon", "rom" };
	for (int i = 0; i < Names.size(); ++i) {
		Names[i] = reversStr(masSt[i].Name);
	}
	for (int i = 0; i < Names.size(); ++i) {
		for (int j = 0; j < Names.size() - 1; ++j) {
			if (Names[j] > Names[j + 1]) {
				string s = Names[j];
				Names[j] = Names[j + 1];
				Names[j + 1] = s;
			}
		}
	}
	for (int i = 0; i < Names.size(); ++i) {
		cout << Names[i] << " ";
	}
}