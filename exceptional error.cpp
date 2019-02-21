#include<conio.h>
#include<iostream>
using namespace std;
int main()
{int a,b;
cout<<"enter the value of a,b";
cin>>a;
cin>>b;
int x=a-b;
try
{if(x!=0)
{cout<<"value is"<<a/x;
}
else
{
throw(x);
}
}
catch(int i)
{cout<<"exception caught="<<x<<endl;
}
cout<<"end";
getch();
}
