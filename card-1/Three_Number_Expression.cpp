#include<iostream>
using namespace std;

int main()
{
    int t;
    long long a,c,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a-b+c)==0|| (a+b-c)==0 ||(a-c+b)==0)
        {
            cout<<"YES"<<endl;
        }
        else if(-a+b-c==0||-b+c-a==0||-a+c-b==0||-b-c+a==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}