#include<iostream>
#include<string>
using namespace std;

int main()
{
	//string.length() return length of a string

	string first_name;

	cout << "Enter you first name: ";
	getline(cin, first_name);

	int length = first_name.length();

	if (length >= 12)
	{
		cout << "You name con't be over 12 charecters long";
	}
	else
	{
		cout << "Welcome " << first_name;
	}

	cout << endl;
	return 0;
}
