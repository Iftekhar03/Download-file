#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w,x,y,k,result;
        cin>>h>>w>>x>>y>>k;
        result=sqrt(pow(w-x,2)+pow(h-y,2));
        if(result<k)
        {
            cout<<1<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}