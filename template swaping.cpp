#include<conio.h>
#include<iostream>
using namespace std;
template<class t>
void bubble(t a[],int n)
{for(int i=0;i<n;i++)
for(int j=n;j<i;j++)
if(a[j-1]>a[j])
{swap(a[j],a[j-1]);
}
}
template<class x>
void swap(x a,x b)
{x temp=a;
a=b;
b=temp;
}
int main()
{int x[5]={1,2,3,5,6};
float y[5]={1.1,2.2,3.3,4.4,5.5};
bubble(x,5);
bubble(y,5);
for(int i=0;i<5;i++)
{cout<<x[i];
}
cout<<"sorting of y";
for(int i=0;i<5;i++)
{cout<<y[i];
}
getch();
}
