#include <iostream>
#include <conio.h>
using namespace std;
void tower(int a,char from,char aux,char to)
{if(a==1)
{cout<<"disc 1 move from"<<from<<"to"<<to;

}
else
{
tower(a-1,from,to,aux);
cout<<"disc move from"<<from<<"to"<<to;
tower(a-1,aux,from,to);
}

}
int main()
{int n;
cout<<"enter the number of disc";
cin>> n;
tower(n,'A','B','C');
getch();
}
