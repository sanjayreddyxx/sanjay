#include<iostream>
using namespace std;
class student
{
  private :
  string name;
  int id;
  int m1;
  int m2;
  int total;
  float avg;
  public :
  student()
  {
   name="sanjay";
    id=192372056;
    m1=10;
    m2=10;
  }
  ~student()
  {
    cout<<"\nDESTRUCTOR IS CALLED  ";
  }
  void display()
  {
    cout<<"name : "<<name<<endl;
   cout<<"id :"<<id<<endl;
   cout<<"m1 , m2 marks"<<m1<<m2<<endl;
   total=m1+m2;
    cout<<"total is : "<<total;
    avg=m1+m2/2;
    cout<<"avg : \n "<<avg;
  }
};
int main()
{
  student s;
    s.display();
}
