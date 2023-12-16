#include<iostream>
using namespace std;
int factorial(int a)
{
  int f=1,i;
  for(i=1;i<=a;i++)
  {
    f=f*i;
  }
  return f;
}
float factorial(float b)
{
  float f=1,i;
  for(i=1;i<=b;i++)
  {
    f=f*i;
  }
return f;  
}
int main()
{
  int a;
  float b;
  cin>>a;
  cin>>b;
  cout<<"fact :"<<factorial(a)<<endl;
  cout<<"fact :"<<factorial(b)<<endl;
}
