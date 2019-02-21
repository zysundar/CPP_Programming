#include<iostream>
#include<string.h>
using namespace std;
class member
{
	public :
		int memberid;
		static int count;
		char name[30];
		member(char* n)
		{
			strcpy(name,n);
			memberid=count;
			count++;
		}
		void show()
		{
			cout<<"id: "<<memberid<<endl<<"name:"<<name<<endl;
		}
	void setName(char *n)
	{
	strcpy(name,n)	;	
	}	
	char* getter(char name[])
	{
		return name;	
	}
};
class student:public member
{
	char branch[30];
	int roll;
	public:
	student(char n[],int r,char b[]):member(n)
	{
	strcpy(branch,b);
	roll=r;
	}
	void show()
	{
		member::show();
		cout<<"Branch: "<<branch<<endl<<"Roll: "<<roll<<endl;
	}
	void setBranch(char b[])
	{
	strcpy(branch,b)	;	
	}
	void setRoll(int r)
	{
	roll=r	;	
	}
	char* getBranch(char branch[])
	{
		return branch;	
	}
	int get(int roll)
	{
		return roll;
	}
	
};
class faculty:public member
{
	char desig[20];
	int fac_id;
	public:
	faculty(char n[],int id,char d[]):member(n)
	{
		strcpy(desig,d);
		fac_id=id;
	}
	void show()
	{
		member::show();
		cout<<"Faculty id:"<<fac_id<<endl<<"Desigation:"<<desig<<endl;
	}
	void setDig(char d[])
	{
	strcpy(desig,d)	;	
	}
	void setFacid(int id)
	{
	fac_id=id	;	
	}
	int getFacid(int fac_id)
	{
		return fac_id;
	}
	char* getDig(char desig[])
	{
		return desig;
	}
	
};
void printall(member *ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		ar[i]->show();
	}
}
int member::count=101;
int main()
{
member m1("amit");
faculty f1("sumit",203,"professor");
student s1("Geeta",1212,"CSE");
//m1.show();
//f1.show();
//s1.show();
//member &r1=m1; r1.show();
//member &r2=f1; r2.show();
//member &r3=s1; r3.show();
//member * ar[5];
//ar[0]=&m1;
//ar[1]=&f1;
//ar[2]=&s1;
//printall(ar,3);
return 0;
}
