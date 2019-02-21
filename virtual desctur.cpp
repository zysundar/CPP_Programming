#include<conio.h>
#include<iostream>
using namespace std;
class Base
{
 public:
 virtual~Base() {cout << "Base Destructor\t"; }
};

class Derived:public Base
{
 public:
 ~Derived() { cout<< "Derived Destructor"; }
}; 

int main()
{
 Base* b = new Derived;  
 delete b;
}
