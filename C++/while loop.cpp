#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	// while loops

	string name;

	while (name.empty())
	{
		cout << "Please enteer your name" << endl;
		getline(cin, name);
	}
	cout << "Wwlcome" << name;

	return 0;
}
