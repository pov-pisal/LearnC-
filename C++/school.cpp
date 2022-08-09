#include<iostream>
using namespace std;
int main()
{
	int x[5];
	for(int i=0;i<5;i++)
	{
		cout<<"x["<<i<<"]=";
		cin>>x[i];
		
	}
	for(int j=0;j<5;j++)
		cout<<x[j]<<"\t";

	return 0;
}
