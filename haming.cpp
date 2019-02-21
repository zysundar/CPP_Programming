#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,k,m,r,p=0,n,q=0,c[20],z,x,y,w=0;
cout<<"how many digit you want to enter";
cin>>k;
int a[k];
cout<<"enter the data one by by one";
for(i=1;i<=k;i++)
{
cin>>a[i];	
}
m=1;
while(m+k+1>=pow(2,m))
{
	m++;
	}
	cout<<m;
	n=k+m;
j=1;r=0;
int b[n];
for(i=1;i<=n;i++)
{r=pow(2,p);
 if(i==r)
 {
 b[i]=0;
 p++;	
 }
else
{
b[i]=a[j];
j++;
}
}
for(i=1;i<=n;i++)
{
	cout<<b[i];
	}
	z=1;
for(i=1;i<=m;i++)
{
	x=pow(2,q);
	for(j=x;j<=n;j=j+(x*2))
	{ 
	 for(y=x;y<(j+x);y++)
	{  
	c[z]=b[y];
	z++;
	}
	
	}
           	for(y=1;y<=(z-1);y++)
	 {
		if(c[y]==1) w++;
	                     	                     
	 }
	if(w%2==0)
	{
	    b[x]=0;	
	}
	else
	b[x]=1;
for(y=1;y<20;y++)
{
	c[y]=0;
}
	
q++;
}
	cout<<"hamming code is";
for(i=1;i<=n;i++)
{
	b[i];
	}	
	
	
	
return 0;	
	
}

