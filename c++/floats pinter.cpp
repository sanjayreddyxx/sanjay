#include<iostream>
using namespace std;
int main()
{
  float arr[]={1,2,3,4,5,6,7,8,9,10};
  int i;
  float* p=arr;
  int l=sizeof(arr)/sizeof(arr[0]);
  cout<<"elements : \n";
  for(i=0;i<l;i++)
  {
    cout<<*(p+i)<<" "<<endl;
  }
  cout<<"adderss "<<p;
}
