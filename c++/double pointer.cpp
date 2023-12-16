#include<iostream>
using namespace std;
int main()
{
  double x;
  double* y=&x;
  cout<<"enter the number : \n ";
  cin>>x;
  cout<<"\nadderss of the number : "<<y<<endl;
  cout<<"\n value of the number : "<<*y<<endl;
}
