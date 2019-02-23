#include <iostream>
using namespace std;
void colony(int a[],int n,int k)
{
	int temp[n];
	for(int i=0;i<n;i++)temp[i]=a[i];
	while(k--)
	{
		temp[0]=0^a[1];
		temp[n-1]=0^a[n-2];
		for(int i=1;i<=n-2;i++)
		{
			temp[i]=a[i-1]^a[i+1];
		}
		for(int i=0;i<n;i++)a[i]=temp[i];
	}
	
	
}
int main() {
	// your code goes here
	int n;
	cin>>n;
    int k;
    cin>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	colony(a,n,k);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
