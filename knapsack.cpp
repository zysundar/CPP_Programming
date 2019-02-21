#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; } 
int main()
{
	int n;
	cin>>n;
	int cap;
	cout<<"capacity"<<endl;
	cin>>cap;
	int wt[n];
	int v[n];
	cout<<"wt"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
		cin>>v[i];
	}
	int k[n+1][cap+1];

  
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=cap;w++)
		{
			if(i==0||w==0)
			{
				k[i][w]=0;
			}
			else if(wt[i-1]<=w)
			{
				k[i][w]=max(k[i-1][w],k[i-1][w-wt[i-1]]+v[i-1]);
			}
			else
			k[i][w]=k[i-1][w];
		}
	}
	cout<<k[n][cap];
	return 0;
}
