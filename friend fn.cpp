#include<conio.h>
#include<iostream>
using namespace std;
class abc;
class xyz
{int a,c,d;
public:
	void get(int x)
	{a=x;
	}
	void dis()
	{cout<<a;
	}
friend void swap(xyz,abc); 
};
class abc
{int b;
public:
void get(int z)
{
b=z;
}
void dis()
{cout<<b;
}
friend void swap(xyz,abc);
};
void swap(xyz b1,abc b2)
{int temp;
temp=b1.a;
b1.a=b2.b;
b2.b=temp;
}
int main()
{xyz x;
abc a;
x.get(10);
a.get(20);
x.dis();
a.dis();
swap(x,a);
x.dis();
a.dis();
getch();
}
