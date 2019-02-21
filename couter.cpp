#include<conio.h>
#include<iostream>
using namespace std;
class counter
{
	private:
		int count;
		public:
			void inccount()
			{cout<<"enter count value";
			cin>>count;
			
			}
			void getcount()
			{cout<<count;
			}
};
int main()
{counter c1;
c1.getcount();
c1.inccount();
getch();
}
