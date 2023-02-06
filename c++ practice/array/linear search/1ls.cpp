
#include<iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<=size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
  int key;
  int arr[10]={1,3,8,51,23,11,21,34,44,67};
  cout<<"enter the element to search for "<<endl;
  cin>>key;
  bool found=search(arr,10,key);
  if(found)
  {
    cout<<"key is present";
  }
  else{
    cout<<"key is absent";
  }

  return 0;
}
