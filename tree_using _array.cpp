#include<iostream>
using namespace std;
class bst
{
	int a[500];
	public :
		bst()
		{
			for(int i=0;i<500;i++)
			{
				a[i]=0;
			}
		}
		void insert(int x)
		{
			int root=1;
			while(a[root]!=0)
			{
				if(x<a[root])
				{
					root=root*2;
				}
				else if(x>a[root])
				{
					root=(root*2)+1;
				}
				else 
				return;
			}
			a[root]=x;
		}
		void inorder(int root)
		{
			if(a[root]==0)
			{
				return;
			}
			inorder(root*2);
			cout<<a[root];
			inorder(root*2+1);
		}
};
int main()
{
	bst b;
	b.insert(50);
	b.insert(25);b.insert(12);b.insert(37);b.insert(150);b.insert(175);b.insert(250);
	b.inorder(1);
}
