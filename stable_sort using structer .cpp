#include<bits/stdc++.h>
using namespace std;
struct student
{
	string name;
	char sec;
	int rol;
};
bool  byname(student a,student b)
{
	return a.name<b.name;
}
int main()
{
	
	int n;
	cin>>n;
	vector<student>s;
	string a[] = {"Andrew", "Battle", "Chen  ", "Fox   ","Furia ", "Gazsi ", "Kanaga", "Rohde "};
	char b[]=  {'A', 'C', 'A', 'A', 'A', 'B', 'B', 'A'};
	int c[]={1,2,3,4,5,8,7,6};
	for(int i=0;i<n;i++)
	{
		student s1;
		s1.name=a[i];
		s1.sec=b[i];
		s1.rol=c[i];
		s.push_back(s1);
	}
	stable_sort(s.begin(),s.end(),byname);
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i].name<<"\t"<<s[i].sec<<"\t"<<s[i].rol<<endl;
	}
	return 0;
}
