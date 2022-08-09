#include<iostream>
using namespace std;

int main()
{
	int n,s;
	cout<<"N= ";
	cin>>n;
	cout<<"S= ";
	for(int i=1;i<=n;i+=2)
	{
		s+=i;
		cout<<i<<"+";
	}
	
	cout<<"\b="<<s;
	
	
	
	
	return 0;
}
