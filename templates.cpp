#include<conio.h>
#include<iostream>
using namespace std;
template<class t1,class t2>
class test
{t1 a;
t2 b;
public:
	test(t1 x,t2 y)
	{a=x;
	b=y;
	}
	void show()
	{cout<<a<<"and"<<b;
	}
};
int min()
{test<float,int>ts1(1.23,12);
test<char,int>ts2('a',22);
ts1.show();
ts2.show();
getch();
}
