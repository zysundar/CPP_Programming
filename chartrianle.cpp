#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int j;
	char row,k='A';
	cin>>row;
	for(int i=1;i<=(row-'A'+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k;
		}
		k++;
		cout<<endl;
	}
	return 0;
}
