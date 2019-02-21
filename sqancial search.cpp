#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int arr[3][7]={12,23,78,98,67,56,45,19,65,9},a,i,j,f=0;
	int (*p)[7];
	cout<<"\nENTER A NUMBER: ";
	cin>>a;
	p=&arr[7];
	for(i=0;i<3;i++)
	{for(j=0;j<7;j++)
	{
		if(a==arr[i][j])
			f=1;
	}
    }
	if(f==1)
		cout<<"\nTHE NUMBER %d EXISTS IN THE ARRAY"<<a;
	else
cout<<"\nTHE NUMBER %d DOES NOT EXIST IN THE ARRAY"<<a;
	getch();
}

