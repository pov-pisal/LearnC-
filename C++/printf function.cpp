#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	// printf()

	string make = "Ford";
	string model = "Mustang";
	int year = 2021;
	double price = 999.99;
	char for_sale = 'Y';

	printf("Your car is made by: %s", "Ford"); cout << endl;
	printf("Your car is made by: %s", make.c_str()); cout << endl;
	printf("Your car is a: %s %s", "Ford", "Mustang"); cout << endl;
	printf("Your car is a: %s %s", make.c_str(), model.c_str());


	printf("The year is: %d", year); cout << endl;
	printf("The price is: %f", price); cout << endl;
	printf("Is it for sale: %c", for_sale); cout << endl;

	printf("The price is: $%.2f", price); cout << endl;
	printf("This precedes with black spaces:%10s", "Ford"); cout << endl;
	printf("This precedes with zeros:%010s", "Ford"); cout << endl;
	printf("Lift justify:%-10s%-10s", "Ford","Mustang"); cout << endl;

	cout << endl;
	return 0;
}
