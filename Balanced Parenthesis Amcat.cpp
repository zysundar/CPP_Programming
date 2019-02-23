    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	// your code goes here
    	string s;
    	cin>>s;
    	int f=2;
    	stack<char>p;
    	char c;
    	for(int i=0;i<s.length();i++)
    	{
    		if(s[i]=='('||s[i]=='['||s[i]=='{')
    		{
    			p.push(s[i]);
    			continue;
    		}
    		if(p.empty())
    		{
    			f=1;
    		}
    		if(s[i]==')')
    		{
    			c=p.top();
    			p.pop();
    			if(c=='{'||c=='[')
    			{
    				f=1;
    			}
     
    		}
    	else if(s[i]==']')
    		{
    			c=p.top();
    			p.pop();
    			if(c=='{'||c=='(')
    			{
    				f=1;
    			}
     
    		}
    	else if(s[i]=='}')
    		{
    			c=p.top();
    			p.pop();
    			if(c=='('||c=='[')
    			{
    				f=1;
    			}
     
    		}
    	}
    	if(p.empty())
    	f=0;
    	f==0?cout<<"Yes":cout<<"NO";
    	return 0;
    }
