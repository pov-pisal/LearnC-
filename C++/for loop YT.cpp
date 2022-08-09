#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	// for loops
	// for (int i = 1; i <= 10; i++)
	// for (int i = 10; i >= 0; i--)
	
	string word;

	cout << "Enter the word to spell: ";
	cin >> word;

	for (int i=0;i<word.length();i++)
	{
		cout << word.at(i) << " ";

	}

	cout << endl;
	return 0;
}
