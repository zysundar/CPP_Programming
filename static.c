#include<stdio.h>
int g1=5;
int fun(int x)
{
	static int s=4;
	g1=g1+x;
	s++;
	x=x+s;
	return x;
}
int gun(int x)
{
	static int t=5;
	g1=g1-x;
	t=t-2;
	x=x+t;
	return x;
}
int main()
{
	int x=fun(gun(fun(gun(3))));
	printf("%d",x);
	return 0;
}
