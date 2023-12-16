#include<iostream>
using namespace std;
int main()
{
  char q;
  char* p=&q;
  cout<<"enter the char : \n";
  cin>>q;
  cout<<"\nadderss of the char is : "<<p<<endl;
  cout<<"\n value of the char is : "<<*p;
}
