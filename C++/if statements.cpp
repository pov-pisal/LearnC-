#include<iostream>
using namespace std;

int main()
{
	int temperture;
	cout << "Pless enter the temperture (C): ";
	cin >> temperture;

	if (temperture >= 30)
	{
		cout << "It is so hot outside,:/";
	}
	else if(temperture <=0)
	{
		cout << "It is cold outside *brrrr*";
	}
	else
	{
		cout << "It is warm outside :)";
	}

	cout << endl;
	return 0;
}
