#include<conio.h>
#include<iostream>
using namespace std;

class counter
{
private:
       int count;

public:
       void inaccount()
       {
	  cout<<"Enter the value count";
	  cin>>count;	
	}
	
	void getcount()
	{
	cout<<count;
	}
};
int main()
{

counter c1;
c1.inaccount();
c1.getcount();

return 0;
}
