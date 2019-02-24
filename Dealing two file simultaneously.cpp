#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
ifstream in_stream;
ofstream out_stream;
int num;

  in_stream.open("sundaram.cpp");

  if(in_stream.fail())
  {
    cout<<"input file could not be opened";
    exit(1);
  }
  
out_stream.open("squares.dat");

  if(out_stream.fail())
  {
      cout<<"output file could not open";
      exit(1);
  }
in_stream>>num;
out_stream<<"the square of"<<num<<"is"<<num*num;
in_stream.close();
out_stream.close();

 return 0;
}
