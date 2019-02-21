#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
int x;
int (*cmp)(int a,int b);
int a=6;
int b=9;	
cmp=sum;
x=cmp(a,b);
printf("%d\n",x);
cmp=min;
x=cmp(5,7);
printf("%d\n",x);
cmp=max;
x=cmp(5,7);
printf("%d\n",x);
return 0;
}
