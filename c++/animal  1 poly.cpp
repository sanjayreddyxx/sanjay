#include<iostream>
using namespace std;
class animal
{
  public:
  virtual void speak(){}
 };
class dog:public animal
{
public :
void speak()
{
cout<<"dog speaks ------------>bow bow\n";
}
};
class cat : public animal
{
public :
void speak()
{
cout<<"cat speaks --------->meow \n";
}
};
int main()
{
  animal *a[2];
  cat c;
  a[2]=&c;
  dog d;
  a[1]=&d;
  a[1]->speak();
  a[2]->speak();
}
