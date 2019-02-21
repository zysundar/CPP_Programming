#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
    int n,c=0;
	char a1[s1.length()+1];
	char a2[s2.length()+1];
	strcpy(a1,s1.c_str());
	strcpy(a2,s2.c_str());
	sort(a1,a1+s1.length()+1);
    sort(a2,a2+s2.length()+1);
    for(int i=0;i<s1.length()+1;i++)
    {
    	cout<<a1[i];
    }
    s1.length()>s2.length() ? n=s1.length()+1 : n=s2.length()+1;
	for(int i=0;i<n;i++)
	{
		if(a1[i]!=a2[i])
		{
			c++;
		}
	} 
	cout<<c;
}
