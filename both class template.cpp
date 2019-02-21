#include<conio.h>
#include<iostream>
using namespace std;
template<class t1,class t2>
class test1
{public:
t1 a;
t2 b;
/*	test1(t1 x,t2 y)
	{a=x;
	b=y;
	}*/
	void input()
	{cout<<"enter the value of a and b";
	cin>>a;
	cin>>b;
	}
	void show()
	{cout<<a<<"and"<<b;
	}
};
template<class t1,class t2,class t3>
class test2:public test1<t1,t2>
{public:
t3 z;
void read()
{cout<<"enter z value";
cin>>z;
}
void cal()
{cout<<test1<t1,t2>::a+test1<t1,t2>::b+z;
}
};
int main()
{test2<float,int,float>ts1;
//test2<int,int>ts2(3,22);
ts1.input();
ts1.show();
ts1.read();
ts1.cal();
getch();
}
