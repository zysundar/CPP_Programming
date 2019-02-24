#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h[1000]={0};
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		h[a[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==h[a[i]])
		continue;
		cout<<a[i]<<"  "<<h[a[i]]<<endl;
	}
	return 0;
}
