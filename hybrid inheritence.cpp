#include<conio.h>
#include<iostream>
using namespace std;
class student
{public:
	int rn;
	void get()
	{cout<<"enter the rn";
	cin>>rn;
	}
};
class test:public student
{public:
int m1,m2;
void get1()
{cout<<"enter the marks";
cin>>m1;
cin>>m2;
}
};
class result:public test
{public:
	int test;
	void get2()
	{test=m1+m2;
	cout<<test;
	}
};
class sport
{public:
	int score;
	void get3()
	{cout<<"enter the score";
	cin>>score;
	}
};
class name:public sport,public result
{public:
char name;
void get4()
{cout<<"enter the name";
cin>>name; 
}
void dis()
{cout<<rn;
cout<<test;
cout<<score;
cout<<name;
}
};
int main()
{name n;
n.get();
n.get1();
n.get2();
n.get3();
n.get4();
n.dis();
getch();
}  
