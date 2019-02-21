#include<conio.h>
#include<iostream>
using namespace std;
main(){int a[]={1,2,3,4,5};
int *p,b[5],i;
p=&a[i];
for(i=0;i<=5;i++)
{b[i]=*p;
p++;
}
for(i=0;i<=5;i++)
cout<<a[i];
cout<<b[i];
getch();
}
