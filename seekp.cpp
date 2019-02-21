#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class stu
{public:
string name;
int age;
string city;
void getdata()
{cin>>name;
cin>>age;
cin>>city;
}
};
int main()
{
stu a;
a.getdata();
ofstream file;
file.open("p.txt");
file<<a.name<<endl;
file<<a.age<<endl;
file<<a.city<<endl;
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

