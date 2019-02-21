#include<iostream>
#include<fstream>
using namespace std;
struct student
{
	int data;
	char name[20];
};
int main()
{
student d={101,"abhi"};
student d1={104,"rob"};
fstream fout("datafile.txt",ofstream :: out | ofstream:: binary| ofstream :: in);
if(fout.fail()){
	cout<<"error in opening";return 0;
}	

fout.write((const char*)&d,sizeof(d));
fout.write((const char*)&d1,sizeof(d1));
student  d3;
fout.seekg(0,ios::beg);
fout.read(( char*)&d3,sizeof(d3));
cout<<endl<<d3.data<<"::"<<d3.name;
fout.read(( char*)&d3,sizeof(d3));
cout<<endl<<d3.data<<"::"<<d3.name;
}
