#include<iostream>
using namespace std;
class car
{
  private:
  string carname;
  string carmodel;
  string fueltype;
  int prize ;
  string body;
  string cartype;
  public:
  car()
  {
    carname="MAHINDRA";
    carmodel="THAR";
    fueltype="DISEL";
    prize=1600000;
    body="SPORT MODEL";
    cartype="SUV";
  }
  ~car()
  {
    cout<<" :: THIS IS CALLED DESTRUCTOR ::";
  }
  void display()
  {
    cout<<"ENTER THE CAR NAME :"<<carname<<endl;
    cout<<"ENTER THE CAR MODEL :"<<carmodel<<endl;
    cout<<"ENTER THE FUEL TYPE :"<<cartype<<endl;
    cout<<"ENTER  THE PRIZE :"<<prize<<endl;
    cout<<"ENTER THE BODY TYPE :"<<body<<endl;
    cout<<"ENTER THE CAR TYPE :"<<cartype<<endl;
  }
};
int main()
{
  car c;
  c.display();
}
