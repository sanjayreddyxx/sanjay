#include<iostream>
using namespace std;
class shape 
{
  public :
  int l,b,r;
  void read()
  {
    cout<<"enter the l,b \n";
    cin>>l>>b;
  }
  void read1()
  {
    cout<<"enter the r \n";
    cin>>r;
  }
virtual void area(){}
};
class rectangle : public shape 
{
public :
float a;
void area()
{
a=l*b;
cout<<"area of rectangle : "<<a<<endl;
}
};
class circle : public shape
{
public :
float a;
void area()
{
a=3.14*r*r;
cout<<"area of circle : "<<a;
}
};
int main()
{
  shape *s[2];
  rectangle r;
  r.read();
  circle c;
  c.read1();
  s[1]=&r;
  s[2]=&c;
  s[1]->area();
  s[2]->area();
}
