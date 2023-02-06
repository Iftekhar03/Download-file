#include<iostream>
using namespace std;

int main()
{
  int a,b,i,k=0,sum=0,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a>>b;
    sum=(a+k)-b;
    if(sum<0)
        k=0;
    else
        k=sum;
  }
  cout<<sum;
  return 0;
}