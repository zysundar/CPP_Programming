#include<conio.h>
#include<iostream>
using namespace std;
 class stac
 {public:
 int max=10;
 string stack[10];char m[5];
 int top=0;
 char n;
 void insertion()
 {cout<<"enter the value y/n";
 cin>>n;
 while(n!='n')
 {
 if(top==max)
 cout<<"OVERFLOW";
 else
 {cout<<"enter the element which u want to insert";
  cin>>m;
 //cin.getline(m,5);
 top++;
 stack[top]=m;
 cout<<"enter the value y/n";
 cin>>n;
 }
 }
 }
 void deletion()
 {if(top==-1)
 cout<<"UNDERFLOW";
 else
 top--;
 cout<<"deletion done";
 }
 void traverse()
 {if(top=0)
 cout<<"stack is empty";
 else
 for(int i=0;i<10;i++)
 cout<<stack[i];
 }
};
int main()
{
 stac a;
 a.insertion();
 a.deletion();
 a.traverse();
 getch();
}

 
