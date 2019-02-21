#include<bits/stdc++.h>
#include<queue>
using namespace std;
void breadthFirstSearch(int u,int n,int a[][7])
{
	queue <int> q;
	int cov[n];
	for(int i=0;i<n;i++)
	{
		cov[i]=0;
	}
	q.push(u);cov[u]=1;
	int x;
	while(!q.empty())
	{
		x=q.front();q.pop();
		cout<<x<<" ";
		
		for(int w=0;w<n;w++)
		{
			if(a[x][w]!=0)
			{
				if(cov[w]==0)
				{
					q.push(w);
					cov[w]=1;
				}
			}
		}
	}
	
	
	
}





int main()
{
	int n;
	cin>>n;
	int a[n][7];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	breadthFirstSearch(0,n,a);
	
}

