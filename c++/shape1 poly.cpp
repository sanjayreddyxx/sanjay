#include<iostream>
using namespace std;
class shape 
{
  public :
  float l,b;
  void read()
  {
    cin>>l>>b;
  }
  float w,h;
  void read1()
  {
    cin>>w>>h;
  }
  virtual void area(){}
    virtual void perimeter(){}
};
class rectangle:public shape
{
public :
float a,p;
void area()
{
a=l*b;
cout<<"area of rectangle : "<<a<<endl;
}
void perimeter ()
{
p=2*(l+b);
cout<<"perimeter of rectangle : "<<p<<endl;
}
};
class triangle : public shape 
{
public:
float a,p;
void area()
{
a=0.5*w*h;
cout<<"area of triangle : "<<a<<endl;
}
void perimeter ()
{
p=b+w+h;
cout<<"perimeter of triangle : "<<p<<endl;
}
};
int main()
{
  shape*s[2];
  rectangle r;
  triangle t;
  s[1]=&r;
  s[2]=&t;
  s[1]->read();
  s[2]->read1();
  s[1]->area();
  s[1]->perimeter();
  s[2]->area();
  s[2]->perimeter();
}
