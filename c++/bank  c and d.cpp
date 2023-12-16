#include<iostream>
using namespace std;
class bank
{
  private :
  string name;
  int accno;
  string acctype;
  int deposit;
  int balance;
  public :
  bank()
  {
  name="SANJAY";
    accno=192372056;
    acctype=" SAVING ";
    deposit=10000;
    balance=20000;
  }
  ~bank()
  {
    cout<<"this is called destructor";
  }
  void display()
  {
    cout<<"the name of bank emloyee is :"<<name<<endl;
  cout<<"account number is : "<<accno<<endl;
  cout<<"account type of bank employee is : "<<acctype<<endl;
  cout<<"deposit money : "<<deposit<<endl;
  cout<<"balance money : "<<balance<<endl;
  }
};
int main()
{
  bank b;
  b.display();
}
