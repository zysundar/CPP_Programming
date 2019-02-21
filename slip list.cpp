#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;
class item
{//int code[50];
string str[50];
int price[40];
int cnt;
public:
	void count()
	{cnt=0;
	}
	void getdata()
	{cout<<"enter the item";
	//cin>>code[cnt];
	cin>>str[cnt];
	cout<<"enter the price";
	cin>>price[cnt];
	cnt++;
	}
	void displayprice()
	{int i;
	int sum=0;
	for(i=0;i<cnt;i++)
	{
	sum=sum+price[i];
	}
	cout<<"price is="<<sum<<endl;	
	}
	void deleteprice()
	{int d;
	cout<<"enter the delete item code";
	cin>>d;
for(int i=0;i<cnt;i++)
{if(str[i]==d)
price[i]=0;
}
else
{cout<<" not matching any code"; 
}

	}
	void displayall()
	{for(int i=0;i<cnt;i++)
	{cout<<"code is="<<str[i]<<endl;
	cout<<"price is="<<price[i]<<endl;
	}
	}
};
int main()
{item a;
a.count();
while(1)
{int x;
cout<<"splip list"<<endl;
cout<<"enter the your requirement"<<endl;
cout<<"1:enter your code and price"<<endl;
cout<<"2:display total price"<<endl;
cout<<"3:delete any items"<<endl;
cout<<"4:display all record"<<endl;
cout<<"5:quite"<<endl;
cin>>x;
switch(x)
{case 1:a.getdata();
break;
case 2:a.displayprice();
break;
case 3:a.deleteprice();
break;
case 4:a.displayall();
break;
case 5:
	cout<<"wrong input try again"<<endl;
exit(1);
	}
}
getch();
}
