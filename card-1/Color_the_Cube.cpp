#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        long long n,x1,x2,x3,x4,x5,x6,sum;
        cin>>n>>x1>>x2>>x3>>x4>>x5>>x6;
        sum=x1+x2+x3+x4+x5+x6;
        cout<<sum*(n%2+n/2)<<endl;
    }
    return 0;
}