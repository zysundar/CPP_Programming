#include<conio.h>
#include<iostream>
using namespace std;
int main()
{int i,j;
int n;
cout<<"enter element of the array";
cin>>n;
int a[n];
cout<<"enter element of array";
for(i=0;i<n;i++)
{cin>>a[i];
}
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(a[j]>a[i])
{int t=0;
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
}
for(i=n-1;i>0;i--)
{
cout<<"element are="<<a[i];
}
getch();
}
