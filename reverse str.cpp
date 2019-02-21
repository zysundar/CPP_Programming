#include<conio.h>
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{int i,n;
string str="sundaram mishra";
n=strlen(str);
cout<<n;
cout<<"enter the string";
for(i=0;i<n;i++)
{cin>>str;
}
for(i=n;i<0;i--)
{cout<<str;
}
getch();
}
