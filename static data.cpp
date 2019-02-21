#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
class book
{
      int price;
      int year;
      static int count;
      public:
      void getdata(int x, int y);
      void putdata();
      void showcount();
};
int book::count;
void book::getdata(int x, int y)
{
     price=x;
     year=y;
     count++;
     if(count>1)
     {
                cout<<"space over";
                getch();
                exit(0);
     }
}
void book::putdata()
{
    
     cout<<"price is"<<price<<"\n";
        cout<<"year is"<<year<<"\n";
}
void book::showcount()
{
         cout<<"count is"<<count<<"\n";
        
}
int main()
{
  book b1,b2;
   b1.showcount();
  b1.getdata(10,15);  
   b1.showcount();
  b2.getdata(20,30); 
    b2.showcount(); 
   
  
   getch();
}

