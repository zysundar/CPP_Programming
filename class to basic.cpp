#include<conio.h>
#include<iostream>
using namespace std;
class student
{int rn;
float fee;
public:
	student(int a,float m)
	{
	rn=a;
	fee=m;
}

operator int()
{return(rn);
}
operator float()
{return(fee);
}
};
 main()
{float j;
int f;
student st(5,4200.50);
j=st;
f=st;
cout<<j;
cout<<f;
getch();

}
