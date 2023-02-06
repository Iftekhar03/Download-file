#include<iostream>
using namespace std;

int main(){
   int n=1888;
   int n_100=n/100;
    n=n-(100*n_100);
   int n_50=n/50;
    n=n-(50*n_50);
   int n_20=n/20;
    n=n-(20*n_20);
   int n_10=n/10;
    n=n-(10*n_10);
   int n_5=n/5;
    n=n-(5*n_5);
   int n_2=n/2;
    n=n-(2*n_2);
   int n_1=n;

   cout<<"note of 100 is :"<<n_100<<"\n";
   cout<<"note of 50 is :"<<n_50<<"\n";
   cout<<"note of 20 is :"<<n_20<<"\n";
   cout<<"note of 10 is :"<<n_10<<"\n";
   cout<<"note of 5 is :"<<n_5<<"\n";
   cout<<"note of 2 is :"<<n_2<<"\n";
   cout<<"note of 1 is :"<<n_1<<"\n";
   
   int total=(n_100*100)+(n_50*50)+(n_20*20)+
   (n_10*10)+(n_2*2)+(n_5*5)+n_1;
   cout<<"Totall=> "<<total;
   /*switch (n)
   {
   case 1:
    
    break;
   
   default:
    break;
   }*/

}