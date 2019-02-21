#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{ifstream A;
iostream B;
string str="i am student of cse";
A.open("abc.cpp");
while(!A)
{str=A.get();
cin>>str;
getline(A,str);
}
A.close();
getch();
}

