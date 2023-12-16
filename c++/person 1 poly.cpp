#include<iostream>
using namespace std;
class person
{
  public :
  virtual void greet(){}
};
class student : public person
{
public:
void greet()
{
cout<<"students ------> GOOD MORNING MAM\n ";
}
};
class teacher : public person
{
public:
void greet()
{
cout<<"teacher --------> GOOD MORNING SIT DOWN ";
}
};
int main()
{
  person *p[2];
  student s;
  p[1]=&s;
  teacher t;
  p[2]=&t;
  p[1]->greet();  
  p[2]->greet();
}
