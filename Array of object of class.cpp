#include<iostream>
#include<conio.h>
using namespace std;
class distance
{
int feet;
float inch;
public:
	void getdist()
	{
        cout<<"enter feet";
	cin>>feet;
	cout<<"enter inch";
	cin>>inch;
        }
	
	void showdist()
	{
	cout<<feet<<inch;
	}
	
};
main()
{
class distance dist[100];
int n=0;
char ans;
cout<<endl;
do{
	cout<<"Enter distance number: "<<n+1;
	dist[++n].getdist();
	cout<<"Enter ans: ";
	cin>>ans;
   }
while(ans!='n');
for(int j=0;j<n;j++)
{
cout<<"distance number"<<j+1<<"is";
dist[j].showdist();
}
cout<<endl;

getch();
}
