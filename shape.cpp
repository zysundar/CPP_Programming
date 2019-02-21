#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int row,j=0,c1=0,c=0;
	cin>>row;
	for(int i=1;i<=row;i++)
	{
		for(int k=1;k<=row-i;k++)
		{
			cout<<" ";
			c++;
		}

		while(j!=2*i-1)
		{
			if(c<=row-1)
			{
				cout<<j+i;
				c++;
			}
			else
			{
				c1++;
				cout<<j+i-2*c1;
			}
			//cout<<"*";
			
			j++;
		}
		c1=0;
			c=0;
			j=0;
		cout<<endl;
	}
	return 0;
}
