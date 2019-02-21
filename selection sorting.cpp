#include<conio.h>
#include<iostream>
using namespace std;
int main()
{int i,j,t=0,m;
int n;
cout<<"enter element of the array";
cin>>n;
int a[n];
cout<<"enter element of array";
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<=n-1;i++)
{m=i;
for(j=i+1;j<n;j++)
{if(a[m]>a[j])
m=j;
if(m!=i)
{t=a[i];
a[m]=a[i];
a[i]=t;
}
}
}
for(i=0;i<n;i++)
{cout<<"element are"<<a[i];
}
getch();
}
