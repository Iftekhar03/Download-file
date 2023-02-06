#include<iostream>
using namespace std;
int main()
{
    int n=5,row,col;
    for(row=1;row<=n;row++)
    {
        /*int space=n-row;
        while(space)
        {
            cout<<" ";
            space-=1;
        }*/
        for(col=1;col<=row;col++){
            cout<<"#";
        }
        /*int start=row-1;
        while(start){
            cout<<"#";
            start-=1;
        }*/
        cout<<endl;
    }

    return 0;
}


