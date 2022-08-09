#include <iostream>
using namespace std;

int main()
{
	int n,result,s=0,amount;
	cout<<"How many number you bet: ";cin>>n;
	int a[n],x[n];

	for(int i=0;i<n;i++)
	{
		cout<<"Num "<<i+1<<":";
		cin>>a[i];
		cout<<"Price "<<i+1<<":";
		cin>>x[i];
	}
	cout<<"----------------------\n";
	result=9;
	cout<<"REsult: "<<result<<endl;
	for(int i=0;i<n;i++)
	{
		if(result==a[i])
		{
			s=1;
			amount=x[i]*70;
			cout<<"You win amount= "<<amount<<"$";
			break;
		}
	}
	if(s==0)
		cout<<"You lost";
}
