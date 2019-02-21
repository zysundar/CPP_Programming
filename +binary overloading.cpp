#include<conio.h>
#include<iostream>
class abc
{
int a,b;
public:
void getdata(int x,int z)
{a=x;
b=z;

}
void display()
{cout<<a<<"\n";
cout<<b<<"\n";

}
abc operator+(abc &t)
{abc z;
z.a=a+t.a;
z.b=b+t.b;
return z;
}
};
int main()
{abc a,b,c;
a.getdata(10,20);
a.display();
c=a+b;
c.display();
}
