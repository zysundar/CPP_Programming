#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter the value of a,b";
cin>>a;
cin>>b;
 
int x=a-b;
try
{
  if(x!=0)
   cout<<"value is"<<a/x;
  else
    throw(x);

}
catch(int i)
{
  cout<<"Exception caught="<<x<<endl;
}

return 0;
}
