#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,b,x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[1]<<endl;
    }
    return 0;
}