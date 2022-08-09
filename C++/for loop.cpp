#include <iostream>
using namespace std;
int main()
{
	char ch='R';
	switch(ch)
	{
		case 'R':
			cout<<"Red";
			break;
		case 'G':
			cout<<"Green";
			break;
		case 'B':
			cout<<"Black";
		default:
			cout<<"Unknow color";
	}
}
