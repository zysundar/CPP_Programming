#include<conio.h>
#include<iostream>
using namespace std;
class base
{private:
	int num1;
	public:
		void baseread()
		{cout<<"enter number";
		cin>>num1;
		}
		void baseshow()
		{cout<<num1;
		}
	/*	void abc()
		{baseread();
		baseshow();
		}*/
};
class derived:public base
{private:
	int num2;
	public:
	void derivedread()
	{cout<<"enter the number";
	cin>>num2;
		}
		void derivedshow()
		{cout<<num2;
		} 
	/*void abc()
		{baseread();
		baseshow();
		}*/
};
class c:public base
{private:
	int a,b;
	public:
	void get()
	{cout<<"enter a,b";
	cin>>a;
	cin>>b;
	}
	void show()
	{
	cout<<a;
	cout<<b;
	}
};
int main()
{c d1;
d1.baseread();
d1.baseshow();
d1.derivedread();
d1.derivedshow();
d1.get();
d1.show();
getch();
}
