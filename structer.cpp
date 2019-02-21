#include<conio.h>
#include<iostream>
using namespace std;
int main()
{struct book
{char book[30];
int pages;
int price;
}b;
cout<<"enter the book name";
cin>>b.book;
cout<<"enter the pages";
cin>>b.pages;
cout<<"enter the price";
cin>>b.price;
cout<<"the element of the book are"<<endl;;
cout<<b.book<<endl;
cout<<b.pages<<endl;
cout<<b.price<<endl;
getch();
}
