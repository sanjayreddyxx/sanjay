#include<iostream>
using namespace std;
class book
{
  private :
  string bookname;
  string author;
  string booktype;
  int price;
  public:
  book()
  {
     bookname="wings of fire";
    author="apj abdul kalam";
    booktype="auto bio graphical";
    price=1000;
  }
  ~book()
  {
    cout<<" :: THIS IS CALLED DESTRUCTOR :: "<<endl;
  }
  void display()
    {
    cout<<" NAME OF THE BOOK : "<<bookname<<endl;
    cout<<" NAME OF THE AUTHOR : "<<author<<endl;
    cout<<" ENTER THE BOOK TYPE : "<<booktype<<endl;
    cout<<" PRIZE OF THE BOOK : "<<price<<endl;
  }
    
};
int main()
{
  book b;
  b.display();
}
