#include<bits/stdc++.h>
using namespace std;
int show(priority_queue<int>p1)
{
	while(!p1.empty())
	{
		cout<<p1.top()<<endl;
		p1.pop();
	}
	return 1;
}
int main()
{
	priority_queue<int>p;
	p.push(10);
	p.push(1);
	p.push(0);
	p.push(03);
	p.push(100);
	p.push(30);
	show(p);
}
