#include<iostream>
using namespace std;
class vehicle
{
  public:
  virtual void size(){}
};
class car : public vehicle
{
public:
void size ()
{
cout<<"car size ---------> SMALL \n";
}
};
class truck : public vehicle
{
public:
void size()
{
cout<<"truck size ---------> LARGE \n";
}
};
int main()
{
  vehicle *v[2];
  car c;
  v[1]=&c;
  truck t;
  v[2]=&t;
  v[1]->size();
  v[2]->size();
}
