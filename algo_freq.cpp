#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	int f[n];
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		f[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		c=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=c;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			cout<<a[i]<<":"<<f[i]<<endl;
		}
	}
	return 0;
}

