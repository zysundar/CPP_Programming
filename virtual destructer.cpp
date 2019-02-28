#include<conio.h>
#include<iostream>
using namespace std;

class Base
{
 public:
 virtual ~Base() {cout << "Base Destructor\t"; }
 Base(){cout<<"base constructrer";}
};

class Derived:public Base
{
 public:
virtual ~Derived() { cout<< "Derived Destructor"; }

Derived() { cout<< "Derived consstructor";} 
}; 

int main()
{
 Base* b = new Derived;     //Upcasting
 delete b;
}
