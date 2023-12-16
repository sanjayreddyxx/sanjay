#include<iostream>
using namespace std;
class rectangle
{
  private:
  float area;
  int h,w;
  float perimeter;
  int l,b;
  float volume;
  
    public:
  rectangle()
  {
    h=2;
    w=3;
    l=5;
    b=6;
   
  }
  void calculate()
  {
    area=l*w;
    perimeter=2*(l+b);
    volume=l*w*h;
  }
  ~rectangle()
  {
    cout<<"THIS IS CALLED DESTRUCTOR";
  }
  void display()
  {
    cout<<"AREA OF RECTANGLE IS : "<<area<<endl;
    cout<<"PERIMETER OF RECTANGLE : "<<perimeter<<endl;
    cout<<" VOLUME OF RECTANGLE : "<<volume<<endl;
  }
};
int main()
{
  rectangle r;
  r.calculate();
  r.display();
  
}
