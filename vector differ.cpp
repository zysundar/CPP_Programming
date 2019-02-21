#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
main()
{int arr[]={1,2,34,45};
vector<int>v(arr,arr+5);
while(!v.empty())
{cout<<v.back()<<"  ";
v.pop_back();
}
getch();
}
