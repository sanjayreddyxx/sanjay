#include<iostream>
#include<cmath>
using namespace std;
int area(int a)
{
  return pow(a,2);
}
int area(int l,int b,int h)
{
  return l*b*h;
}
float area(float r)
{
  return 3.14*pow(r,2);
}
int main()
{
  int a,l,b,h;
  float r;
  cin>>a>>l>>b>>h>>r;
  cout<<"area of sphere :"<<area(a)<<endl;
  cout<<"area of rectangle : "<<area(l,b,h)<<endl;
  cout<<"area of circle : "<<area(r);
  }
