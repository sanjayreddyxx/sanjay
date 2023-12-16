#include<iostream>
using namespace std;
class employee
{
  public :
  virtual void calculatepay(){}
};
class manager : public employee
{
public :
void calculatepay()
{
cout<<"manager salary------->900000\nper extra hour ----->6000";
}
};
class engineer : public employee 
{
public:
void calculatepay()
{
cout<<"\nengineers salary ------->500000 \nper extra hour ------->5000";
}
};
int main()
{
  employee *e[2];
  manager m;
  e[1]=&m;
  engineer n;
  e[2]=&n;
  e[1]->calculatepay();
  e[2]->calculatepay();
}
