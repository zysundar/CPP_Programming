#include<iostream>
#include<stack>
using namespace std;
struct node
{
	int data;
	node* next;
};
node *start,*list;
node* insertfirst(int x)
{
	if(start==NULL)
	{
		list=new node();
		list->data=x;
		list->next=NULL;
		start=list;
	 }
	else
	{
		//---insertion at the first---
		list=new node();
		list->data=x;
		list->next=start;
		start=list;
		//----------------------------
		//----insertion at last----
		/*node* temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		list=new node();
		list->data=x;
		list->next=NULL;
		temp->next=list;*/
	   //-----------------------------------
	}
}
node* insertlast(int x)
{
	if(start==NULL)
	{
		list=new node();
		list->data=x;
		list->next=NULL;
		start=list;
	 }
	else
	{
		//---insertion at the first---
		/*list=new node();
		list->data=x;
		list->next=start;
		start=list;*/
		//----------------------------
		//----insertion at last----
		node* temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		list=new node();
		list->data=x;
		list->next=NULL;
		temp->next=list;
	   //-----------------------------------
	}
}
node* insert(int x,int n)
{
	node* temp=start;
	for(int i=0;i<n-2;i++)
	{
		temp=temp->next;
	}
	list=new node();
	list->data=x;
	list->next=temp->next;
	temp->next=list;
}
node* reverse()
{
	stack<node*>s;
	node* temp=start;
	while(temp!=NULL)
	{
		s.push(temp);
		temp=temp->next;
	}
	while(!s.empty())
	{
		temp=s.top();s.pop();
		cout<<temp->data;
	}
	//while(temp!=start)
	//{
	//	cout<<temp->data<<"<-";
	//	temp=temp
	//}
}
/*int delfirst()
{
	node* temp=start;
	cout<<temp->data;
	temp=temp->next;
	delete temp;
//	return ;
}*/
node* insertsorted(int x)
{
	node* temp=start;
	while(temp!=NULL)
	{
		if(temp->data < x && temp->next->data >x)
		{
			list=new node();
			list->data=x;
			list->next=temp->next;
			temp->next=list;
		}
		
		temp=temp->next;
	}
}

int main()
{
	start=NULL;
	int n;
cout<<"How many number you want to enter";
cin>>n;
cout<<"enter your number";
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	insertlast(x);
}
//insert(9,4);
//insert(10,5);
insertsorted(3);
insertsorted(4);
while(start!=NULL)
{
	cout<<start->data<<"->";
	start=start->next;
}
reverse();
return 0;
}

