#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int n;
	getline(cin,s1);
	getline(cin,s2);
int map1[26]={0}, map2[26]={0};
int c = 0;

for (int i=0;i<s1.length();i++)
    map1[s1[i]]++;

for (int i=0;i<s2.length();i++)
    map2[s2[i]]++;

for (int i=1;i<=26;i++)
      {
      	cout<<s1[i]<<map1[s1[i]]<<endl;
      }
    //c += min(map1[i], map2[i]);
    
    cout<<c;
}
