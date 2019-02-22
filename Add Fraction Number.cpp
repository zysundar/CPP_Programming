int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
long d=(den1*den2)/gcd(den1,den2);
long n=(num1*(d/den1))+(num2*(d/den2));
long g=gcd(n,d);
if(g>1)
{
cout<<(n/g)<<"/"<<(d/g)<<endl;
 }
 else
 cout<<(n)<<"/"<<(d)<<endl;
}
int main()
{
int num1,den1,num2,den2;
cin>>num1>>den1>>num2>>den2;
addFraction(num1,den1,num2,den2);
return 0;
}
