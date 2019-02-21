#include<iostream>
using namespace std;
class part
{private:
	int modelnumber;
	int partnumber;
	float cost;
public:
void setpart(int mn,int pn,float c)
{modelnumber=mn;
partnumber=pn;
cost=c;

}
void showpart()
{cout<<"model"<<modelnumber;
cout<<"part"<<partnumber;
cout<<"cost"<<cost;
}
	
};
int main()
{part A;
A.setpart(6244,317,217.55);
A.showpart();
return 0;
}

