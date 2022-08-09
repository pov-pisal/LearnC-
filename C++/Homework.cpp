#include<iostream>
using namespace std;
int main()
{
  int n,w,result,amoun=0,j=0,total=0;
  char more;
  agains:
  {
    j++;
    w=0;
    cout<<"Player "<<j<<":";
    cout<<"\nHow many you bet: ";cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
      cout<<"num"<<i+1<<": ";
      cin>>a[i];
      cout<<"price "<<i+1<<": ";cin>>b[i];
      total+=b[i];
    }
    cout<<"------------------------------\n";
    result=ran
    cout<<"Result="<<result;
    for(int i=0;i<n;i++)
    {
      if(result==a[i])
      {
        w=1;
        amoun=b[i]*70;
        cout<<"\nYou win amount= "<<amoun<<"$";
        goto mores;
      }
    
    }
    if(w==0)
      cout<<"\nYou lost";
    mores:
    cout<<"\nOne more player:";cin>>more;
    if(more=='y')
      goto agains;
    else
    {
      cout<<"\nTotal money for company: "<<total<<"$";
    }
  
  }
  
  
  return 0;
}
