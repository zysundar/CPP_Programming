#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1=fopen("str.c","r");
	FILE *f2=fopen("sundar.txt","w");
	int c=0;
	while(c!=-1)
	{
		c=fgetc(f1);
		if(c==EOF)
		break;
		fputc(c,f2);	
	}
	fclose(f1);
	fclose(f2);
return  0;
}
