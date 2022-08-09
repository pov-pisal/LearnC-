#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	// do-while loops

	string answer;
	
	do
	{
		cout << "You are playing THE GAME" << endl;
		cout << "*pew pew*" << endl;
		cout << "Press q to quit!" << endl;
		getline(cin, answer);
		cout << "*********************"<<endl;
	} while (answer.at(0)!='q' && answer.at(0)!='Q');

	cout << "You have quit the game :(" << endl;




	cout << endl;
	return 0;
}
