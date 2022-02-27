#include <iostream>
#include <string>

using namespace std;

struct student {
	int Age;
	string Name;
	string Drink;
};

int main() {
	student Carl;
	Carl.Age = 17;
	Carl.Name = "Carl";
	Carl.Drink = "juice";
	student Mark;
	Mark.Age = 21;
	Mark.Name = "Mark";
	Mark.Drink = "tea";
	student Matthew;
	Matthew.Age = 18;
	Matthew.Name = "Matthew";
	Matthew.Drink = "coffee";

	cout << Carl.Name << " " << Carl.Age << " " << Carl.Drink << endl;
	cout << Mark.Name << " " << Mark.Age << " " << Mark.Drink << endl;
	cout << Matthew.Name << " " << Matthew.Age << " " << Matthew.Drink << endl;
}