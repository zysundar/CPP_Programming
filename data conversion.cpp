#include<conio.h>
#include<iostream>
using namespace std;
class distance
{private:
	float mtf;
	int feet;
	float inches;
	public:
		distance()
		{feet=0;
		inches=0;
		mtf=3.2890;
		}
		distance(float m)
		{ float meter=m;
		float fltfeet=meter*mtf;
		feet=int(fltfeet);
		inches=12*feet;
		cout<<fltfeet;
		}
	/*	void show()
		{cout<<feet;
		cout<<inches;
		}
*/
};
int main()
{class distance d(6.00);
//d.show();
getch();
}
