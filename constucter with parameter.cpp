#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{int len,bredth;
public:
	rectangle(len,breadth);
	
	

 int area()
{int a;
a=len*bredth;
cout<<a;
}
};
main()
{rectangle r1(7,8);
r1.area();
getch();
}

