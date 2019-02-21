#include<conio.h>
#include<iostream>
using namespace std;
main()
{int i;
int sum=0;
int *a=new int[10];
cout<<"enter the value of a";
for(i=0;i<10;i++)
{cin>>a[i];

sum=sum+a[i];
}
cout<<sum;
getch();

}
