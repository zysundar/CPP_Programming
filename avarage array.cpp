#include<iostream>
#include<conio.h>
using namespace std;
main()
{int size;
int i;
int total=0;
 int average;
cout<<"enter the value of size";
cin>>size;
int sale[size];
for(i=0;i<=size;i++)
{cout<<"enter the sales";
cin>>sale[size];
}
for(i=0;i<=size;i++)
{
total=total+sale[size];
average=total/size;

}
cout<<"average is"<<average;
getch();
}
