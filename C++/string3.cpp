#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	double x;
	double y;

	cout << "This program will enter the mix of two number"<<endl;

	cout << "Enter in number 1:";
	cin >> x;

	cout << "Enter in number 2:";
	cin >> y;

	double z = min(x, y);

	cout << z;
	
	return 0;
}
