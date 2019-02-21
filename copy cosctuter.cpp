#include<conio.h>
#include<iostream>
using namespace std;
class counter
{int id;
public:
	counter(int i)
	{id=i;
	
	cout<<"constructer is="<<id<<endl;
}
	counter(counter&c)
	{ c=c.id;
	
	cout<<"destructer is="<<<<endl;
}

};
	main()
	{counter c1(1);
	counter c2(2);
	counter c3(c1);
	cout<<"end main()"<<endl;
	getch();
	}
