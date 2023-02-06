#include<iostream>
using namespace std;

int main(){
    int i,n,producrt_digits=1,sum_digits=0,result;
    cin>>n;
    while(n!=0)
    {
        int reminder=n%10;
        producrt_digits*=reminder;
        sum_digits+=reminder;
        n/=10;
    }
    result=producrt_digits-sum_digits;
    cout<<result<<endl;
	return 0;
}
