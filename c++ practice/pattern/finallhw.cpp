#include<iostream>
using namespace std;

int main()
{
    int n=5,row,col;
    for(row=1;row<=n;row++)
    {
        
        for(col=1;col<=n-row+1;col++){
            cout<<col;
        }
        /*int space=n-row;
        while(space)
        {
            cout<<"*";
            space-=1;
        }*/
        int start=row-1;
        while(start){
            cout<<"*";
            start-=1;
        }
       /* int start2=row;
        while(start2){
            for(int col2=n;col2<=n-row-1;col2--){
                cout<<col2;
            }
        }*/
        cout<<endl;
    }

    return 0;
}


