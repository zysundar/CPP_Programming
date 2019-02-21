#include<conio.h>
#include<iostream>
using namespace std;
class b
{
public:
int a;
void s()
{cout<<"yeh lo output";
}
public:
	int b;
	void getdata()
	{cout<<"enter the value of a and b";
	cin>>a;
	cin>>b;
	s();
	}
	void display()
	{cout<<a;
	cout<<b<<endl;
cout<<endl;	}
};
class c:public b
{int c;
public:
	void dis()
	{cout<<"sum="<<a+b;
	}
	
};
int main()
{class c c1;
c1.getdata();
c1.display();
c1.dis();
getch();
}
