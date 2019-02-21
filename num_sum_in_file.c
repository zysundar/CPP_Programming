#include<stdio.h>
#include<stdlib.h>
int main()
{
	//FILE *f1=fopen("str.c","r");
	FILE *f2=fopen("number.txt","r");
	int n,s=0;
	if(!feof(f2))
	{
	scanf(f2,"%d",&n);
	s+=n;
	}
	printf("%d",s);
	//fclose(f1);
	fclose(f2);
return  0;
}
