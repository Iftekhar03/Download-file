#include<iostream>
using namespace std;

int main(){
    int n=10;
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
            cout<<"Its prime number"<<endl;
        else
            cout<<"Not prime"<<endl;
    }

    return 0;
}