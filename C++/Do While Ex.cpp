#include <iostream>
using namespace std;
int main()
{
	int i=1;
	char word;
	do
	{
		cout<<"Student "<<i<<endl;
		cout<<"One more:";
		cin>>word;
		i++;;
	}while(word=='y');
	cout<<"Number of student: "<<word;
	
	return 0;
}
