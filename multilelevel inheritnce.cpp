#include<conio.h>
#include<iostream>
using namespace std;
class a
{public:
char nm;
void get()
{cout<<"enter the name";
cin>>nm;
}
};
class b
{public:
int rg;
void get1()
{cout<<"enter the rg";
cin>>rg;
}
};
class c:public a,public b
{public:
char add;
void get2()
{cout<<"enter the add";
cin>>add;
}
void dis()
{cout<<nm<<rg<<add;
}
};
int main()
{c c1;
c1.get();
c1.get1();
c1.get2();
//c1.dis();
getch();
}
