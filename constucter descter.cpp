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
	~counter()
	{
	
	cout<<"destructer is="<<id<<endl;
}
};

	main()
	{counter c1(1);
	counter c2(23);
	counter c3(c2);
	cout<<"end main()"<<endl;
	getch();
	}


