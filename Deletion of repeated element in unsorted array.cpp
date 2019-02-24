#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,k,n;
 
cout<<"How many element in array you want to enter? ";
cin>>n;
int a[n];
 
cout<<"insert the value:";
 
for(i=0;i<n;i++)
cin>>a[i];

cout<<"\nThe inserted arrey is:";
for(i=0;i<n;i++)
cout<<a[i];

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
  j++;

 }
}
 
cout<<"\nAfetr removing repeated element in array";

for(i=0;i<n;i++)
cout<<a[i];

return 0;
}
