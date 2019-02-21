#include<iostream>
using namespace std;
int main() 
{ 
    int n, a[10], b[10], count = 0, c, d; 
    cout<<"Enter number of elements:"; 
    cin>>n; 
    cout<<"enter the "<<n<<" number:"; 
    for(c=0;c<n;c++) 
        cin>>a[c];  //Getting the array elements

    for(c=0;c<n;c++) //For removing duplicate elements
    { 
        for(d=0;d<count;d++) 
        { 
            if(a[c]==b[d]) 
                break; 
        } 
        if(d==count) 
        { 
            b[count] = a[c]; 
            count++; 
        } 
    } 
    cout<<"Array after removing duplicate elements\n"; 
    for(c=0;c<count;c++) 
        cout<<b[c]; 

    system("pause");
    return 0; 
} 

