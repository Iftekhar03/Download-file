#include<iostream>
using namespace std;

int main(){
   int n=1888;

   switch (n)
   {
   case 1:
      int n_100=n/100;
        cout<<"notes of 100 is "<<n_100<<"\n";
        n=n-(n_100*100);
   case 2:
      int n_20=n/20;
        cout<<"notes of 20 is "<<n_20<<"\n";
        n=n-(n_20*20);
   case 3:
      int n_10=n/10;
        cout<<"notes of 10 is "<<n_10<<"\n";
        break;
   
   default:cout<<"error";
   break;
   }

}