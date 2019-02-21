#include<bits/stdc++.h>
using namespace std;
int fib(int n,int s0,int t0)
{
	int dp[n+2];
	int i;
	
	dp[0]=s0;
	dp[1]=t0;
	
	for(int i=2;i<=n;i++)
	{
		dp[i] = dp[i-1]+dp[i-2]+dp[i-1]*dp[i-2];
	}
	return dp[n];
}
int main()
{
	int t,s0,t0,n;
	cin>>t;
	while(t--)
	{
		cin>>s0>>t0>>n;
		cout<<fib(n,s0,t0);
	}
}
