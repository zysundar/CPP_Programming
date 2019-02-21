#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
main()
{int arr[]={1,2,34,45};
vector<int>v(arr,arr+4);
for(vector<int>::iterator i=v.begin();i!=v.end();i++)
{cout<<*i<<endl;

}
v.push_back(8);
while(!v.empty())
{cout<<v.back()<<"  ";
v.pop_back();
}
getch();
}
