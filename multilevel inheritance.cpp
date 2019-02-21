#include<conio.h>
#include<iostream>
using namespace std;
class student
{public:
int rn;
void get()
{cout<<"enter the roll number";
cin>>rn;
}
void dis()
{cout<<rn;
}
};
class test:public student
{public:
float m1,m2;
void get1()
{cout<<"enter the marks";
cin>>m1;
cin>>m2;
} 
void dis1()
{cout<<m1;
cout<<m2;
}
};
class result:public test
{public:
float total;
void dis2()
{cout<<"total marks="<<m1+m2;
}
};
int main()
{result a;
a.get();
a.get1();
a.dis2();
getch();
}
