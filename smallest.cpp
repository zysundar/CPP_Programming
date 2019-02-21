#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i;
int a[10];
int n;
int smallest;
cout<<"enter the number of array";
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];
}
smallest=a[0];
//for(i=0;i<n;i++)
//{cout<<a[i];
//}

for(int i=0;i<n;i++)
{if(a[i]<smallest)
{smallest=a[i];
}
}
cout<<smallest;
getch();
}
