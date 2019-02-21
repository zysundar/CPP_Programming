#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{ifstream inf("sundaram.txt");
string name;
float cost;
inf>>name>>cost;

cout<<name<<endl;
cout<<cost<<endl;
inf.close();
getch();
}
