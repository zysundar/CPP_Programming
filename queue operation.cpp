#include<iostream>
#include<conio.h>
using namespace std;
class queue
{
public:
int MAX=5;
int queue_array[50];
int rear = - 1;
int front = - 1;    
char choice;
char m;
void insertion()
{cout<<"enter your choice y/n";
cin>>m;
while(m!='n')
{
    int add_item;
    if (rear == MAX - 1)
    cout<<"Queue Overflow \n";
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        cout<<"Inset the element in queue : ";
        cin>>add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }

    cout<<"enter the choice again y/n";
    cin>>m;
}
 } /*End of insert()*/
 
void deletion()
{
    if (front == - 1 &&rear==-1)
    {
        cout<<"Queue Underflow \n";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is :";
		cout<< queue_array[front]<<endl;
        front = front + 1;
    }
} /*End of delete() */
void display()
{
    int i;
    if (front == - 1)
        cout<<"Queue is empty \n";
    else
    {
        cout<<"Queue is : \n";
       for (i = front; i <= rear; i++)
             cout<< queue_array[i];
			  cout<<"\n";//<<queue_array[rear];
           // cout<< queue_array[front]<<queue_array[rear];
           //cout<<front;
          // cout<<rear;
     int size = front > rear ? (MAX - front + rear + 1) : (rear - front + 1); 
     cout<<size;
   // size = abs(abs(MAX - front) - abs(MAX -rear));
     // cout<<size;
    }
}/*End of display() */
};
int main()
{queue a;
a.insertion();

a.deletion();
a.display();
getch();
}
 
