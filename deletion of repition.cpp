#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n;
int i,j,k;
int a[10];
cout<<"how many you want to enter";
cin>>n;
cout<<"ensert the value";
for(i=0;i<n;i++)
{cin>>a[i];
}
cout<<"\nThe inserted arrey is=";
for(i=0;i<n;i++)
{cout<<a[i];
}
//cout<<"afetr removing repiting element in array";
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;)
 {
  if(a[i]==a[j])
  {
    for(k=j;k<n;k++)
    {
     a[k]=a[k+1];
     }
     n--;
}

else
{j++;
}
}
}
cout<<"\nAfetr removing repiting element in array";
for(i=0;i<n;i++)
cout<<a[i];
getch();
}
