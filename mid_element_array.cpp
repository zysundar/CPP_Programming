#include<iostream>
using namespace std;
void array_mid(int a[],int n,int m)
{
	if(n%2!=0)
	{
		for(int i=n;i>=n/2+1;i--)
		{
			a[i+1]=a[i];
		}
		a[n/2+1]=m;
	}
	else
	{
		for(int i=n;i>n/2;i--)
		{
			a[i+1]=a[i];
		}
		a[n/2]=m;
	}
}
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	array_mid(a,n,m);
	return 0;
}
