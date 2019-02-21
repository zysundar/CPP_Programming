#include<conio.h>
#include<iostream>
using namespace std;
class A
{protected:
	int a;
	public:
		void get()
		{cout<<"enter the value of a";
		cin>>a;
		}
};
class B:virtual public A
{protected:
int b;
public:
	void read()
	{cout<<"enter the value of b";
	cin>>b;
	}
};
class C:virtual public A
{protected:
	int c;
	public:
	void read1()
	{cout<<"enter the value of c";
	cin>>c;
	}
};
class D:public B,public C
{
protected:
int d;
public:
	void read2()
	{cout<<"enter the value of d";
	cin>>d;
	}
	void show()
	{
	cout<<d;
	}
};
int main()
{D d1;
d1.get();
d1.read();
d1.read1();
d1.read2();
d1.show();
getch();
}
