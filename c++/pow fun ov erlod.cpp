#include<iostream>
using namespace std;
#include<cmath>
int power(int a,int b)
{
  return pow(a,b);
}
float power(float c,int d)
{
  return pow(c,d);
}
int main()
{
  int a,b,d;
  float c;
  cin>>a>>b>>c>>d;
  cout<<"pow : "<<power(a,b)<<endl;
  cout<<"pow : "<<power(c,d)<<endl;
}
