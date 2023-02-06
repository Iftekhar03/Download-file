#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double p,x,y,z;
	    cin>>p>>x>>y>>z;
	    if(z==1){
	        p+=((p*y)/100);
	    }
	    else{
	        p-=((p*x)/100);
	    }
	    cout<<fixed<<setprecision(10)<<p<<endl;
	}
	return 0;
}
