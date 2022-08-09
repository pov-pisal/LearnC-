#include<iostream>
using namespace std;

int main()
{
	char answer;
	cout << "What letter grade did you get (A-F): ";
	cin >> answer;

	switch (answer)
	{
		case 'A':
			cout << "You did PERFICT!";
			break;
		case'B':
			cout << "You did you!";
			break;
		case'C':
			cout << "You did OKAY!";
			break;
		case'D':
			cout << "You did not so good!";
			break;
		case'F':
			cout << "YOU FAILED!";
			break;
		default:
			cout << "Enter a letter grade (A-F)";



	}

	return 0;
}
