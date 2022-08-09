#include<iostream>
#include<string>
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

	double z = max(x, y);

	cout << z;
	
	return 0;
}
