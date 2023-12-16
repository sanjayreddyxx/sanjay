#include<iostream>
using namespace std;
class animal
{
  public:
  virtual void move (){}
};
class fish : public animal
{
public :
void move ()
{
cout<<"fish move is --------> SWIMMING \n";
}
};
class bird : public animal
{
public:
void move ()
{
cout<<"birds move is ----------> FLYING \n";
}
};
int main()
{
  animal * a[2];
  bird b;
  a[1]=&b;
  fish f;
  a[2]=&f;
  a[1]->move();
  a[2]->move();
}
