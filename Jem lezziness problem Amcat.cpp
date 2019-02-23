#include <iostream>
using namespace std;

int main()
{
	long long int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    long long int n,b,m,sum=0;
	    cin >> n >> b >> m;
	    while(n>0)
	    {
	        if(n%2==0)
	        {
	            sum+=(n/2)*m+b;
	            m*=2;
	            n=n-(n)/2;
	        }
	        else
	        {
	            sum+=((n+1)/2)*m+b;
	            m*=2;
	            n=n-(n+1)/2;
	        }
	    }
	    cout << sum-b <<endl;
	}
	return 0;
}
