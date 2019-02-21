#include<conio.h>
#include<iostream>
using namespace std;
class item
{static int cnt;
int num;
public:
	void get(int a)
	{num=a;
cnt++;
	}
void show()
{//cout<<num;
cout<<cnt;
}
};
int item::cnt;
int main()
{item i,j,k;
//i.get();
i.show();
j.get(100);
i.get(200);
i.show();
j.show();
cout<<"after reading";
//k.get();
k.show();
getch();
}
