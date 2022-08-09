#include<iostream>
using namespace std;

int main()
{
	char ch;
	int i=0;
	do
	{
		cout<<"Student "<<++i<<endl;
		do
		cout<<"worng "<<i;
		{
			cout<<"One more:";cin>>ch;
		}while(ch!='n'&&ch!='y');
	}while(ch=='y');
	cout<<"Number of student:"<<i;
	
	
}
