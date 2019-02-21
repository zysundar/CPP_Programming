#include<conio.h>
#include<iostream>
using namespace std;
class A
{public:
	int base1;
void read()
{cout<<"inter value of base1";
cin>>base1;
}
};
class B
{public:
	int base2;
	void read1()
	{cout<<"inter value of base2";
	cin>>base2;
	}
};
class c:public A,public B
{public:
	int base3;
	void getdata()
	{cout<<"enter the value of base3";
	cin>>base3;
	}
void dis()
{cout<<base1<<base2<<base3;
}	
};
int main()
{class c c1;
c1.A::read();
c1.B::read1();
c1.getdata();
c1.dis();
getch();
}
