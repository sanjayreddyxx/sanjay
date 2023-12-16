#include<iostream>
#include<cmath>
using namespace std;
int absloute(int a)
{
  return abs(a);
}
float absolute(float b)
{
  return abs(b);
}
int main()
{
  int a;
  float b;
  cin>>a;
  cin>>b;
  cout<<absolute(a)<<endl;
  cout<<absolute(b);
}
