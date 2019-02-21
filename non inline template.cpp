#include<iostream>>
#include<conio.h>
using namespace std;
template<class t1,class t2>
class test
{
public:
	t1 a;
	t2 b;
	void input();
	void show();
};
template<class t1,class t2>
void test<t1,t2>::input()
{cout<<"enter the value of a and b";
cin>>a;
cin>>b;
}
template test<class t1,class t2>
void test<t1,t2>::show()
{cout<<a<<b;
}
int main()
{ test t1;
  t1.input();
  t1.show();
 getch();
}
