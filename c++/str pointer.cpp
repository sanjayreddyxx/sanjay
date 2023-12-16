#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string s="hello world ";
  string* p=&s;
  cout<<"adderss \n :"<<p;
  cout<<"\n value : "<<*p;
}

