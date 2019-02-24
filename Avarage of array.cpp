#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int size;
int total=0;
float average=0;
cout<<"Enter the value of size";
cin>>size;
int sale[size];
for(int i=0;i<size;i++)
{
 cout<<"Enter the sales";
 cin>>sale[i];
 total=total + sale[i];
}
average=total/size;
cout<<"Average is : "<<average;
getch();
}
