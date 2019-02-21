#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

class stac
{
	public:
	int top=0;
	int stack[10];
	int item;
	int max=10;
	void insertion(int item)
	{
		if(top>=max)
  		cout<<"OVERFLOW";
  		else
  		stack[top++]=item;
	}
	void deletion()
	{
		if(top==NULL)
		cout<<"UNDERFLOW";
		else
		top--;
	}
	void traverse()
	{
		for(int i=0;i<top;i++)
		cout<<stack[i];
	}
};
int main()
{stac a;
string str;
cin>>str;
for(int i=0;i<5;i++)
{
	cin>>str[i];
   a.insertion(i);	
}

a.traverse();
getch();
}
