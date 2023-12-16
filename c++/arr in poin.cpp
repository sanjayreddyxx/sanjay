#include<iostream>
using namespace std;
int main()
{
  int i,arr[]={1,2,3,4,5};
  int l=sizeof(arr)/sizeof(arr[0]);
  int* p=arr;
  cout<<"elements are : \n  ";
  for(i=0;i<l;i++)
  {
    cout<<*(p+i)<<" "<<endl;
  }
  cout<<"adderss "<<p;
}
