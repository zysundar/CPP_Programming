#include<conio.h>
#include<iostream>
using namespace std;
class A
{public:
	int a,b;
	void getdata()
	{cout<<"enter the value of a and b";
	cin>>a;
	cin>>b;
	}
	void putdata()
	{cout<<a;
	cout<<b;
	}
};
class B
{public:
	int c,d;
	void get()
	{cout<<"enter the value of c,d";
	cin>>c;
	cin>>d;
	}
	void put()
	{cout<<c;
	cout<<d;
	}
A a1;
};
int main()
{
B b1;
b1.get();
b1.put();
b1.a1.getdata();
b1.a1.putdata();
getch();
}

