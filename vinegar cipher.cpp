#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,key,c="";
	cin>>s>>key;
	int l = key.size();
	for(int i=0;i<s.size();i++)
	{
		c = c+char(((int(s[i])-65+(int(key[i%l])-65))%26)+65);
	}
	cout<<c;
}
