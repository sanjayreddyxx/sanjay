#include<iostream>
using namespace std;
class shape
{
  public:
  float r;
  void read()
  {
    cin>>r;
  }
  public:
  float r1,h;
  void read1()
  {
    cin>>r1>>h;
  }
  virtual void area(){}
  virtual void volume(){}
};
class sphere : public shape
{
public :
float a,v;
void area ()
{
a=4*3.14*r*r;
cout<<"area of sphere  : "<<a<<endl;
}
void volume()
{
v=(4*3.14*r*r*r)/3;
cout<<"volume of sphere : "<<v<<endl;
}
};
class cylinder : public shape
{
public:
float a,v;
void area()
{
a=2*3.14*r1*(r1+h);
cout<<"area of cylinder : "<<a<<endl;
}
void volume()
{
v=3.14*r1*r1*h;
cout<<"volume of cylinder : "<<v;
}
};
int main()
{
  shape* s[2];
  sphere sp;
  s[1]=&sp;
  cylinder c;
  s[2]=&c;
  s[1]->read();
  s[2]->read1();
  s[1]->area();
  s[1]->volume();
  s[2]->area();
  s[2]->volume();
}
