#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n,int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		if(a[i]>n && a[i+1]<n)
		{
			for(j=m;j>=i+1;j--)
			{
				a[j]=a[j-1];
			}
			a[i+1]=m;
		}
		if(a[i]>n)
		{
			a[i+1]=m;
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int i,n,m;
	scanf("%d",&n);
	int a[n];
	printf("inserted number");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n,m);
	return 0;
}
