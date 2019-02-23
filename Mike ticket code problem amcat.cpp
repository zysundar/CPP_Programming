#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	int f=2;
	cin>>s;
	if(s[0]==s[1]) {f=0; return 0;}
	for(int i=2;i<s.length();i++)
	{
		if(((i%2==0) && (s[i]!=s[0])) || ((i%2!=0) && (s[i]!=s[1])))
		{
			f=0;
			break;
		}
	}
	f==0?cout<<"NO":cout<<"Yes";
	
	return 0;
}
