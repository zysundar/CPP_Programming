#include<conio.h>
#include<iostream>
using namespace std;
class hours;
class minutes
{int m;
public:
	minutes(int ms)
	{m=ms;
	}
/*	operator hours()
	{hours h1;
	h1.h=m/60;
	return(h1);
	}*/
	void show()
	{cout<<"minutes="<<m<<"\n";
	}
	int getdata()
	{return m;
	}
};

class hours
{
public:
int h;
hours()
{h=0;
}

	void show()
	{cout<<"hours="<<h<<"\n";
	}
hours(minutes mm)
	{h=mm.getdata()/60;
}
};
int main()
{hours hr;
minutes mn(240);
hr=mn;
hr.show();
mn.show();
getch();
}
