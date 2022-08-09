#include<iostream>
using namespace std;

int main()
{
	int a[4]={5,8,20,30},search,f=0;
	for(int i=0;i<4;i++)
		cout<<a[i]<<"\t";
	cout<<"search=";cin>>search;
	for(int j=0;j<4;j++)
	{
		if(search==a[j])
		{
			f=1;
			cout<<"Found";
			break;
		}
	}
	if(f==0)
		cout<<"Not Found";
	
	return 0;
}
