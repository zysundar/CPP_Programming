#include<conio.h>
#include<iostream>
using namespace std;
class node
{public:
int data;
node *link;
};
main()
{
node *A;
A=0;
node *temp=new node();
(*temp).data=22;
(*temp).link=NULL;
A=temp;
node *temp1=new node();
(*temp1).data=20;
(*temp1).link=NULL;
temp=temp1;
node *temp2=new node();
(*temp2).data=18;
(*temp2).link=NULL;
temp=temp2;
cout<<A->data<<temp->data;
/*node *num;
num=A;
while(num!=NULL)
{cout<<num->data;
num=link->num;
}*/
getch();
}



