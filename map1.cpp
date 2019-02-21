#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	map<string,int>m;
	string s;int n;
	for(int i=0;i<k;i++)
	{
		cout<<"enter num";
	cin>>s;
	cin>>n;
	m.insert(pair<string,int>(s,n));
    
	}
	map <string,int>:: iterator l;
	for(l=m.begin();l!=m.end();l++)
	{
		cout<<l->first<<"\t"<<l->second<<endl;
	}
	map <string,int>:: iterator l1;
	cout<<"enter your element";
	string a;
	cin>>a;
	l1=m.find(a);
	if(l1!=m.end())
	{
		//cout<<"find";
	    cout<<l1->first;
	}
return 0;
}
