#include<iostream>
using namespace std;

int main(){
    int i,n=105;
    bool isPrime=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            //cout<<"prime\n";
            isPrime=0;
            break;
    }
    if(isPrime==0)
        cout<<"Not prime"<<endl;
    else
        cout<<"Prime\n";
	return 0;
}
