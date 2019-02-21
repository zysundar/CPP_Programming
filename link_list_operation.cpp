#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node *start, *list1;
node* insertion(int x)
{
	
	if(start==NULL)
	{
	 	list1=new node();
		list1->data=x;
		list1->next=NULL;
		start=list1;
	}
	else
	{
	list1=new node();
	list1->data=x;
	list1->next=start;
	start=list1;
   }
}
void print(node* start)
{
	
	while(start!=NULL)
	{
		cout<<start->data;
		start=start->next;
	}
}
int main()
{
	start=NULL;
	insertion(10);
	insertion(0);
	insertion(120);
	insertion(12);
	insertion(101);
	print(start);
	return 0;
} 
