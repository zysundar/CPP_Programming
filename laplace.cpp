#include<conio.h>
#include<iostream>
using namespace std;
class marks
{int s1,s2,s3,s4;
int per;
char grade;
public:
	marks(int a,int b,int c,int d)
	{s1=a;
	s2=b;
	s3=c;
	s4=d;
	}
	operator int()
	{per=(s1+s2+s3+s4);
	return(per);
	}
	operator char()
	{
	per=((s1+s2+s3+s4)/400)*100;
	if(per<60&&per>70)
	cout<<"grade b";
	else
	cout<<"fail";
	}
};
main()
{int j;
char c;
marks t1(89,90,80,87);
j=t1;
c=t1.per;
cout<<j;
cout<<c;
getch();

}
