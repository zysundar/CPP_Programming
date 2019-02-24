#include <iostream>
using namespace std;
int encrypt(int a[],int n,int k)
{
	int b[n],p=0;
	if(k%2==0)
	{
	    for(int i=0;i<n;i++)
	    {
		     int s=0;
		     for(int j=i+1;j<=k+i;j++)
		      {
			       s+=a[j%n];
		       }
		     b[p++]=s;
	     }
	   for(int i=0;i<n;i++)
	   {
	    cout<<b[i]<<" ";
	   }
	}
	else
	{
	    for(int i=0;i<n;i++)
	    {
		    int s=0;
		      for(int j=i-1;j>=i-k;j--)
		      {
			      if(j%n>=0)
			      s+=a[(j%n)];
			      else
			      s+=a[n+(j%n)];
		      }
		
		      b[p++]=s;
	    }
	    for(int i=0;i<n;i++)
	    {
	      cout<<b[i]<<" ";
	    }
	}
  
  
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
   //for(int i=k;i<4+k;i++)
   //{
   //	cout<<a[i%n]<<" ";
   //}
   encrypt(a,n,k);
	return 0;
}
