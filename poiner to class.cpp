#include<iostream>
#include<conio.h>
using namespace std;
class A
{int c1,c2;
public:
	void getin()
	{cin>>c1>>c2;
	}
	void disp()
	{cout<<c1<<endl;
	cout<<c2<<endl;
	}
};
main()
{
 A o,*p;
p=&o;
p->getin();
p->disp();
getch();
}
