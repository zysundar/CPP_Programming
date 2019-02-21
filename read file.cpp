#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{ofstream of("data.txt");
string name;
float cost;
cin>>name>>cost;

of<<name<<endl;
of<<cost<<endl;
of.close();
getch();
}
