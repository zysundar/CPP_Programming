#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1=fopen("number.txt","r");
	FILE *f2=fopen("number11.txt","w");
	if(f1==NULL)
	{
		printf("can't open file");
		return -1;
	}
	int len;
	fseek(f1,0,2);
	len=ftell(f1);
	//printf("%d",len);
	int c,n=-1;
	len=7;
	while(len>0)
	{
	c=fgetc(f1);
		if(len==0)
		break;
		fputc(c,f2);
		fseek(f1,n,2);
		n-=2;
		len--;
	}
	fclose(f1);
	fclose(f2);
return  0;
}
