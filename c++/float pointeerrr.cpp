#include<iostream>
using namespace std;
int  main()
{
  float x;
  float* y=&x;
  cout<<"\n enter the number :";
  cin>>x;
  cout<<"\naddress of the number is :"<<y<<endl;
  cout<<"\nvalue of the number : "<<*y<<endl;
}
