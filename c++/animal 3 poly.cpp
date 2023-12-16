#include<iostream>
using namespace std;
class animal
{
  public:
  virtual void eat(){}
};
class herbivore:public animal
{
public :
void eat()
{
cout<<"herbivores ---------> vegitarians  \n";
} 
};
class carnivore : public animal 
{
public:
void eat()
{
cout<<"carnivor -----------> non vegitarian ";
}
};
int main()
{
  animal *a[2];
  herbivore h;
  a[1]=&h;
  carnivore c;
  a[2]=&c;
  a[1]->eat();
  a[2]->eat();
}
