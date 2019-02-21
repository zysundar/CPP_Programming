#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,n;
	cin>>s;
	int key;
	cin>>key;
	for(int i=0;i<s.size();i++)
	{
		n = n+char(((int(s[i])-65+key)%26)+65);
	}
	
	cout<<n;
}
