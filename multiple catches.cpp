#include<conio.h>
#include<iostream>
using namespace std;
void test(int x)
{try
{if(x==1)throw x;
else if(x==0)throw 'x';
else if(x=-1)throw 1.0;
cout<<"end of try block";
}
catch(char c)
{cout<<"caught a character";
}
catch(int m)
{cout<<"caught a integar";
}
catch(double d)
{cout<<"caught adouble";
}
cout<<"end of try catch section";
}
int main()
{cout<<"testing multiple catches";
cout<<"x==1";
test(1);
cout<<"x==0";
test(0);
cout<<"x==-1";
test(-1);
cout<<"x==2";
test(2);
getch();
}

