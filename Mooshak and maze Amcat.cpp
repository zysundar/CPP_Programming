#include <iostream>
using namespace std;

int mushak(int a[][8],int x,int y,int m,int n)
{
	if(x>=0 && m>x && y>=0 && n>y)
	{
		if(a[x][y]==9)return 1;
		if(a[x][y]==1)
		{
			if(mushak(a,x+1,y,m,m)==1)return 1;
			if(mushak(a,x,y+1,m,n)==1)return 1;
			return 0;
		}
		return 0;
	}
	return 0;
	
}
int main() {
	// your code goes here
	int a[8][8];
	for (int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cin>>a[i][j];
		}
	}
cout<<	mushak(a,0,0,8,8);
	return 0;
}
