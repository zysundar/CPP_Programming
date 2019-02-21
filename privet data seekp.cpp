#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
ofstream file;

class stu
{
string name;
int age;
string city;
public:
void getdata()
{cin>>name;
cin>>age;
cin>>city;
}
void putdata()
{
cout<<name<<endl;
cout<<age<<endl;
cout<<city<<endl;
}
};
int main()
{
stu a;
a.getdata();
file.open("p.txt");
a.putdata();
int pos;
pos=file.tellp();
cout<<endl<<pos;
file.seekp(0);
file.seekp(5);
file<<"lpu";
file.seekp(-2,ios::cur);
file<<"ovely";
file.seekp(0,ios::end);
file<<"end";
file.close();
getch();
}

