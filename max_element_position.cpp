#include<iostream>
using namespace std;
int maxpos(int a[],int n)
{
	int max=a[0],pos=0;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			pos=i;
		}
	}
return 	pos;
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
