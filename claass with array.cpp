#include<conio.h>
#include<iostream>
#include<cstring>
using namespace std;
class part
{private:
	char partname[30];
	int partnumber;
	int cost;
	public:
		void setpart(char pname[],int partnumber,int c)
		{strcpy(partname,pname);
		cost=c;
	    }
	    void showpart()
	    {cout<<"number="<<partnumber;
	    cout<<"name"<<partname;
	    cout<<"cost="<<cost;
	    }
	
};
main()
{part part1,part2;
part1.setpart("sundaram",1150,5607);
part2.setpart("mishra",1111,2222);
part1.showpart();
part2.showpart();
cout<<endl;
getch();

}


