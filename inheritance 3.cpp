#include<conio.h>
#include<iostream>
using namespace std;
class A
{public:
A(int a,int b)
{int i=a;
int j=b;
cout<<"A default";
}
};
class B:public A
{public:
B(int c,int a,int b):A(a,b)
{int k=c;
cout<<"B default";
}
};
class C:public B
{public:
	C(int d,int z,int y,int x):B(x,y,z)
	{
int l=d;
cout<<"c defaut"<<l;
}
};
int main()
{C c1(10,20,30,40);
getch();
}
