#include<iostream>
using namespace std;
class Figure
{
	public:
	//double len,wid,ht;
	double area()
	{
		return 0;
	}
};
class Rectangle:public Figure
{
	double len,wid;
	public:
	Rectangle(double l,double w):Figure()
	{
		len=l;
		wid=w;
	}
	double area()
	{
	return len*wid;	
	}
};
class Circle:public Figure
{
	double rad;
public:
	Circle(double r):Figure()
	{
		rad=r;
	}
	double area()
	{
		return 3.14*rad*rad;
	}
};
void sumArea(Figure* ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		ar[i]->area();
	}
}
int main()
{
	Figure f1();
	Rectangle r1(2.5,4.5);
	Circle c1(2.7);
	Figure *ar[5];
	ar[0]=&f1;
	ar[1]=&r1;
	ar[2]=&c1;
	sumArea(ar,3);
}
