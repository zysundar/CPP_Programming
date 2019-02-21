#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> k,p;
	int key;
	string s,c;
	getline(cin,s);
	cin>>key;
	k.push_back(key);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
		p.push_back(-1);
		continue;
		}
		p.push_back(int(s[i]-65));
		if(i>0)
		k.push_back(p[i-1]);
	}
	for(int i=0;i<k.size();i++)
	{
		if(p[i]<0)
		{
		c=c+' ';
		continue;
		}
		c = c+char((int(p[i]+k[i])%26)+65);
	}
	cout<<c;
}
