#include<iostream>
using namespace std;
class person
{
  public :
  char name[100];
  int id;
  char gend[100];
  int age;
  public:
  void read()
  {
    cout<<"enter the name  :\n";
    cin>>name;
    cout<<"enter the id :\n";
    cin>>id;
    cout<<"enter the gender :\n";
    cin>>gend;
    cout<<"enter the age :\n";
    cin>>age;
    cout<<"\nname :"<<name<<"\nid :"<<id<<"\ngend:"<<gend<<"\nage:"<<age;
  }
};
class teacher : public person
{
int sal;
char sub[100];
public :
void read1()
{
cout<<"enter the salary : \n";
cin>>sal;
cout<<"enter the sub : \n ";
cin>>sub;
cout<<"\n sal: "<<sal<<" sub :\n"<<sub;
}
};
class student : public person
{
int classs;
public :
void read2()
{
cout<<"enter the class studing \n";
cin>>classs;
cout<<"\nclasss:"<<classs;
}
};
int main()
{
  student s;
  teacher t;
  cout<<"-------teacher-------\n"<<endl;
  t.read();
  t.read1();
  cout<<"-------student-------\n"<<endl;
  s.read();
  s.read2();
}
