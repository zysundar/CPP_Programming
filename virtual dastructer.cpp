#include<conio.h>
#include<iostream>
using namespace std;
class Base
{
 public:
virtual ~Base() {cout << "\nBase Destructor\t"; }
Base() {cout << "\nBase constructor\t"; } 
 };

class Derived:public Base
{
 public:
 ~Derived() { cout<< "\nDerived Destructor"; }
 Derived(){cout<<"\nderived constructer";}
 };
  class der:public Base
  {public:
  	~der()
  	{cout<<"\nder destructer";
  	}
  	der()
  	{cout<<"\nder constructer";
  	}
  };

int main()
{
 Base* b = new Derived;  
 delete b;
 Base* c=new der;
 delete c;
}
