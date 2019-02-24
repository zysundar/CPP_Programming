#include <stdio.h>
#include<conio.h>
int main()
{
   int first, last, middle, n, search;
 
   cout<<"Enter number of elements\n";
   cin>>n;
   int array[n];
   for (int c = 0; c < n; c++)
      cin>>a[c];
 
   cout<<"Enter value to find\n";
   cin>>search;
   
 #Algo start from here-----------
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) 
   {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         cout<<search<<" found at location "<<middle+1);
         break;
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      cout<<"Not found!"<<search<<" is not present in the list.\n";
   return 0;   
}
