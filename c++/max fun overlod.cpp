#include<iostream>
using namespace std;
void max(int a,int b)
{
if(a>b)
  cout<<"a is greater :"<<a<<endl;
  else
    cout<<"b is greater :"<<b<<endl;
 }
void max (float c,float d)
{
  if(c>d)
    cout<<"c is greater : "<<c<<endl;
  else
    cout<<"d is greater : "<<d<<endl;
}
void max(char s,char z)
{
  if(s>z)
    cout<<s<<" is greater : "<<endl;
  else
    cout<<"greater : "<<z;
}
int main()
{
  int a,b;
  char s,z;
  float c,d;
  cin>>a>>b>>c>>d>>s>>z;
  max(a,b);
  cout<<endl;
  max(c,d);
  cout<<endl;
  max(s,z);
  cout<<endl;
}
