#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
int sub1_marks;
int sub2_marks;
int sub3_marks;
char name[10];
};

int main()
{
struct student s[10];
int n;
cout<<"How many student's marks you want to calculate";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"enter the marks of student"<<i+1<<" and name"<<endl;
cin>>s[i].m1;
cin>>s[i].m2;
cin>>s[i].m3;
cin>>s[i].name[10];
int totalmarks=(s[i].m1+s[i].m2+s[i].m3);
cout<<"total marks="<<totalmarks;
cout<<"name="<<s[i].name[10]<<endl;
}

}
