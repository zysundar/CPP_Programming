#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

using namespace std;
class stu
{public:
string name;
int age;
string city;

void getdata()
{
cin>>name>>age>>city;
}
};
int main()
{stu A,emp;
A.getdata();
ofstream outfile("person.txt");
outfile.write((char*)&A,sizeof(A));
outfile.close();
ifstream infile("person.txt");
infile.read((char*)&emp,sizeof(emp));
cout<<"name="<<emp.name<<endl;
cout<<"age="<<emp.age<<endl;
cout<<"city="<<emp.city<<endl;
infile.close();
return 0;
getch();
}



