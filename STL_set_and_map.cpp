#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include<string.h>
using namespace std;
int main()
{
	//Number of Unique char in string
	string str;
	getline(cin,str);
	set<char>s;
	for(int i=0;str.length();i++)
	{
		s.insert(str[i]);
	}
	cout<<endl<<"number="<<s.size()<<endl;
/*
//Store data in map and fetch the data
map<char,int>ma;
pair<char,int>p;
p.first='A';
p.second=34;
ma.insert(p);
p.first='B';
p.second=38;
ma.insert(p);

for(map<char,int>::iterator m=ma.begin();m!=ma.end();m++)
{
	cout<<m->first<<endl<<m->second;
}*/
return 0;
}
