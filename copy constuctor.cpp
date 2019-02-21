#include<conio.h>
#include<iostream>
using namespace std;
class counter
{int c;
public:
	counter(int a)
	{c=a;
	}
	
	counter(counter&x)
	{cout<<"copy constructor invoked";
	c=x.c;
	}

};
int main()
{counter c1;
c1.counter;
getch();
}
