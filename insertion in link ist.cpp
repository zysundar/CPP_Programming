#include<iostream>
#include<conio.h>
using  namespace std;
class node
{public:
int data;
node *next;

    node *start=NULL,*ptr;
    int item;
    void insertion()
     {  char flag;
      //int i;
     //for(i=0;i<=10;i++)
     cout<<"enter the choice regarding insertion in link y or n ";
     cin>>flag;
     while(flag=='y')
     {
     
     {
        if(start==NULL)
           {ptr=new node;
           cout<<"start is null please enter the first element";
           cin>>item;
             ptr->data=item;
             ptr->next=NULL;
              start=ptr;
              cout<<"first node is created"<<endl;
           }
         else
           {ptr=new node;
           cout<<"start is not null plese inserte other element";
           cin>>item;
             ptr->data=item;
             ptr->next=start;
              start=ptr;
               cout<<"other node is created"<<endl;   
           }
       
      }
      cout<<"you want to insert more element";
      cin>>flag;
      
  }
  cout<<"your insertion has been done"<<endl;
  cout<<"thank you for this"<<endl;
     }
    void traverse()
     {cout<<"the link list inserted by you are=";
      while(start!=NULL)
      
       {cout<<start->data<<ends;
         start=start->next;
       }
    }
    /*void insertion_first()
    {ptr=new node;
    ptr->data=10;
    ptr->next=start;
    start=ptr;
    }*/
   void insertion_last()
    {ptr=new node;
    ptr->data=22;
    ptr->next=NULL;
    //ptr=start;
    while(ptr->next!=NULL)
    {ptr=ptr->next;
      }   
    ptr->next=ptr; 
      
    }
	};
    int main()
    { node a;
    a.insertion();
    //a.traverse();
    //a.insertion_first();
    
    a.insertion_last();
    a.traverse();
    getch();
    }

