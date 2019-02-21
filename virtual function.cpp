 #include<conio.h>
#include<iostream>
using namespace std; 
class cal
{
 public:
virtual void show()                        //virtual keyword
 {
  cout << "Base class";
 }
};
class add:public cal 
{
 public:
 	int i=5;
 	int j=5;
 void show()
 {int k=i+j;
  cout << "add value is="<<k;
 }
};
class sub:public cal
{public:
	int a=5;
	int b=5;
	void show()
	{int s=a-b;
	cout<<" sub value is ="<<s;
	}
};

int main()
{
 cal* n;       //Base class pointer
  add d;     //Derived class object
 n = &d;
 n->show();     //Late Binding Ocuurs
sub s;       //Derived class object
n=&s;
n->show();     //late Binding occuurs
}
