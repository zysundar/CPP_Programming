#include<conio.h>
#include<iostream>
using namespace std;
class A
{public:
A(int a,int b)
{int i=a;
int j=b;
cout<<"A default"<<i<<j<<endl;
}
~A()
{cout<<"a is destructer"<<endl;
}
};
class B:public A
{public:
B(int c,int a,int b):A(a,b)
{int k=c;
cout<<"B default"<<k<<endl;
}
~B()
{cout<<"b destructer "<<endl;
}
};
class C:public B
{public:
	C(int d,int z,int y,int x):B(x,y,z)
	{
int l=d;
cout<<"c defaut"<<l<<endl;
}
~C()
{cout<<"c is destructer"<<endl;
}
};
int main()
{C c1(10,20,30,40);
getch();
}
