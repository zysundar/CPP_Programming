#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{ifstream A;
A.open("sum.cpp");
if(A.fail())
{cout<<"input file could not open";
exit(1);
}
else
{cout<<"file open";
}
char ch;
while(A)
{ch=A.get();
cout<<ch;
}
A.close();
getch();
}
