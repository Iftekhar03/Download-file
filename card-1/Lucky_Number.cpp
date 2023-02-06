#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0;
        long long n;
        cin>>n;
        while((n%2)==0)
        {
            n=n/2;
            p++;
        }
        if(p%2==0)
        {
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}