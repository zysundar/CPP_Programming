#include<bits/stdc++.h>
using namespace std;

class counter
{
 float count;
public:
	counter()
	{
	 count=9;
	}
	counter(int c)
	{
         c=0;
	}
	
	int getcounter()
	{
	 return count;
	}
	
	counter operator --()
	{
         --count;
	 counter temp;
         temp.count=count;
	 return temp;
	}
	
	counter operator --(int)
	{
	 return counter(count--);
	}
};

int main()
{
counter c1,c2,c3;
cout<<c1.getcounter()<<endl;
cout<<c2.getcounter()<<endl;
--c1;
c2=c3--;
cout<<c1.getcounter()<<endl;
cout<<c3.getcounter()<<endl;
cout<<c2.getcounter();
getch();
}

