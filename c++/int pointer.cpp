#include<iostream>
using namespace std;
int main()
{
  int x;
  int* y=&x;
  cout<<"enter the number : \n";
  cin>>x;
  cout<<"adderss of the number : \n"<<y<<endl;
  cout<<"value : \n "<<*y<<endl;
}
