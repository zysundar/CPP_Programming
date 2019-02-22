#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,swap=0,n,m;
cin>>n;
cin>>m;
int array[n][m];
//int array[2][4]={{2,5,7,6},{5,3,6,2}};
for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
    {
    cin>>array[i][j];   	
    }
    sort(array[i],array[i]+n);
}
    //Alternate method to sort
//for (i = 0; i < n; i++)
//{
//    for (j = 0; j < m; j++)
//    {
//    	for(int k=j+1;k<n;k++)
//    	{
//    	
//          if(array[i][j] > array[i][k])
//          {
//            swap = array[i][j];
//            array[i][j] = array[i][k];
//            array[i][k] = swap;
//          }
//        }
//    }
//    
//}



   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      {
       cout<<array[i][j]<<" ";
       }
     cout<<endl;
    }

}
