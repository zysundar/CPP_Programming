#include<iostream>
#include<conio.h>
using namespace std;
class A
{char a[10];
public:
	void get(int x)
	{cin>>a;
	
	}
friend void put(A a1)
{cout<<a1.a;
};
};
main()
{A X;
X.get();
put(X);
getch();
}



	
	
