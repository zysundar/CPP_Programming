#include<iostream>
using namespace std;
class box
{
	double len,wid,ht;
	
	public:
		box(double x,double y, double z)
		{
			len=x;
			wid=y;
			ht=z;
		}
		double volume()
		{
			return len*wid*ht;
		}
		void show()
		{
			cout<<wid<<endl<<len<<ht;
		}
		box larger(box b1)
		{
			if(this->volume()>b1.volume())
			  return *this;
			else
			return b1;
		}
};
int main()
{
	box b(3,4,5);
	box b2(4,4,4);
     b.volume();
	 b2.volume();
	 box b3=b.larger(b2);
	return 0;
}
