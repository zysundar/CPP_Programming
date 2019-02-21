#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
 int data;
 node *next;
};

int main()
 { 
     node *start;
     node *p;
     node *list;
     start=NULL;
     int i,j;
     int n=5;
        cout<<"Enter the value: \n";
        //cin>>j;
	for(i=0;i<n;i++)
		{
		
		cin>>j;
        
         if(start==NULL)
             {
             list=new node;
             list->data=j;
             list->next=NULL;
             start=list;
             }
         else
            {
             list=new node;
             list->data=j;
             list->next=start;
             start=list;
            }
        }
        
        p=start;
   		
   		int flag=1;
        while(n)
        {
        	if(p->data < p->next->data)
        	{
        		flag=1;
        		int t=p->data;
        		p->data=p->next->data;
        	    p->next->data=t;
        	}
        	
        	p=p->next;
        	if(p->next==NULL){
        		p=start;
        		n--;
        	}	
        	
        }

 cout<<"\n\n Linked list: ";
  while(start!=NULL)
  {
   cout<<start->data<<ends;
   start=start->next;
  }

  getch();
}
