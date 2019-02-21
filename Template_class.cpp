#include<conio.h>
#include<iostream>
using namespace std;
template<class t1,class t2>
class test
{t1 a;
t2 b;
public:
	test(t1 x,t1 y)
	{a=x;
	b=y;
	}
	void show()
	{cout<<a<<"and"<<b;
	}
};
class abc:public test
{t1 c;
t2 d;
public:
abc(t1 l,t2 m)
{c=l;
d=m;
}
void display()
{cout<<c<<"and"<<d;
}
};
int main()
{abc<int,int>ts1(1,56);
abc<char,int>ts2(65,22.9);
ts1.show();
ts2.display();
getch();
}
