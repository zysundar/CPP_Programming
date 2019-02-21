#include<conio.h>
#include<iostream>
using namespace std;
main()
{int a[10],i,j,temp,n;
cout<<"enter the number of element";
cin>>n;

for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
cout<<"assertion number is"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<endl;
getch();
}
