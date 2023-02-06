#include<iostream>
using namespace std;

int main(){
    int i,a=0,b=1;
    cout<<a<<endl<<b<<"\n";
    int n=4;//U can use any number in value of n;
    for(i=1;i<=n;i++)
    {
        int next_number=a+b;
        cout<<next_number<<endl;
        a=b;//there is swapping btween a,b,next_number;
        b=next_number;
    }
	return 0;
}
