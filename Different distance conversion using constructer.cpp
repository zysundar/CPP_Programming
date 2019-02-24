#include<conio.h>
#include<iostream>
using namespace std;

class Distance
{
private:
	float mtf;
	int feet;
	float inches;
public:
	Distance()
		{
		feet=0;
		inches=0;
		mtf=3.2890;
		}
	Distance(float m)
		{ 
		float meter=m;
		float fltfeet=meter*mtf;
		feet=int(fltfeet);
		inches=12*feet;
		//cout<<fltfeet;
		}
	void show()
		{
		cout<<feet;
		cout<<inches;
		}

};

int main()
{
class distance d(6.00);
d.show();

return 0;
}
