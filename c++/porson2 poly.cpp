#include<iostream>
using namespace std;
class person
{
  public :
  virtual void work(){}
};
class employee : public person
{
public:
void work ()
{
cout<<"person works as ----------> employee \n";
}
};
class manager : public person 
{
public :
void work()
{
cout<<"person works as ----------> manager ";
}
};
int main()
{
  person *p[2];
  employee e;
  p[1]=&e;
  manager m;
  p[2]=&m;
  p[1]->work();
  p[2]->work();
}
