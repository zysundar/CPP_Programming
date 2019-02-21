#include<iostream>
using namespace std;
#include<conio.h>
class book
{
      int price;
      int year;
      static int count;
      public:
      void getdata(int x, int y);
      void putdata();
      static void showcount()
      {
              cout<<"count is"<<count<<"\n";
              }
};
int book::count;
void book::getdata(int x, int y)
{
     price=x;
     year=y;
     count++;
}
void book::putdata()
{
    
     cout<<"price is"<<price<<"\n";
        cout<<"year is"<<year<<"\n";
}

int main()
{
  book b1,b2;
  b1.getdata(10,15);  
  b2.getdata(20,30);  
  b1.putdata();
    b2.putdata();
    book::showcount();
    book b3;
    b3.getdata(40,50);
    b3.showcount();
  
   getch();
}

