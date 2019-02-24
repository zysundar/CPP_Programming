#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int lower=0,upper=0,number=0,sp=0,i;
	string str ;
	getline(cin,str);
	for(i=0;i<str.length();i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			lower++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			upper++;
			
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			number++;
		}
		else
		sp++;
	}
	cout<<"upper:"<<upper<<endl<<"Lower:"<<lower<<endl<<"Number:"<<number<<endl<<"Special character:"<<sp<<endl;
return 0;
}

