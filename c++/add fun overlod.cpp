#include<iostream>
using namespace std;
int add(int a , int b)
{
 return a+b;
}
float add(float c ,  float d)
{
  return c+d;
}
int main()
{
  int a,b;
  float c,d;
  cin>>a>>b>>c>>d;
  cout<<"sum  ="<<add(a,b)<<endl;
  cout<<"sum  ="<<add(c,d);
}
