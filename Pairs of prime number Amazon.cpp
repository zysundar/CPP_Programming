#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool prime[n+1];
	    int a[n];
	    memset(prime,true,sizeof(prime));
	    for(int p=2;p*p<=n;p++)
	    {
	        if(prime[p]==true)
	        {
	            for(int i=p*p;i<=n;i+=p)
	            {
	                prime[i]=false;
	            }
	        }
	    }
	    int j=0;
	    for(int i=2;i<=n;i++)
	    {
	        if(prime[i]) a[j++]=i;
	    }
	    for(int i=0;i<j;i++)
	    {
	        for(int k=0;k<j;k++)
	        {
	            if(a[i]*a[k]<=n)
	            {
	                cout<<a[i]<<" "<<a[k]<<" ";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
