#include<conio.h>
#include<iostream>
using namespace std;
class abc
{int x,y;
public:
	
void getdata(int a,int b)
	{x=a;
	y=b;
	
	}
	void display()
	{cout<<x;
	cout<<y;
	}
	abc operator+(abc&c)
	{abc t;
	t.x=x+c.x;
	t.y=y+c.y;
	return(t);
}

int operator>(abc&c)
{if(x>c.x&&y>c.y)
return 1;
else
return 0;
}
};
int main()
{abc c1,c2,c3;
c1.getdata(2,3);
c2.getdata(1,2);
c1.display();
c2.display();
c3=c1+c2;
c3.display();
if(c1>c2)
return 1;
else
return 0;
c3.display();
getch();
}
